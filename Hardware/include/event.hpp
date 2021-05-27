#ifndef __EVENT__
#define __EVENT__

#include "../../Libraries/Vector/Vector.h"

typedef bool (*listener)(void);
typedef void (*callback)(void);


class Event
{
    public:
        Event(listener _listener, callback _callback) : m_listener(_listener), m_callback(_callback) {}

        void set_callback(callback);
        void set_listener(listener);

        callback get_callback() { return this->m_callback;}
        listener get_listener() { return this->m_listener; }

        bool operator==(Event);
        bool operator!=(Event);

    private:
        listener m_listener;
        callback m_callback;

};

class EventManager
{
    public:
        EventManager(){}

        int num_events(void);

        Event add_event(Event);
        Event add_event(listener, callback);

        bool remove_event(Event);
        bool remove_event(listener, callback);

        bool exists(Event);

        void process_events(void);

    private:

        std::vector<Event> events;
};

#endif /* __EVENT__ */
