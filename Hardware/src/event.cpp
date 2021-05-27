#include "event.hpp"

// event class

bool Event::operator==(Event event)
{
    return( (this->m_callback == event.m_callback) && (this->m_listener == event.m_listener) );
}

bool Event::operator!=(Event event)
{
    return( (this->m_callback != event.m_callback) | (this->m_listener != event.m_listener) );
}


void Event::set_callback(callback _callback)
{
    this->m_callback = _callback;
}

void Event::set_listener(listener _listener)
{
    this->m_listener = _listener;
}

// event manager

Event EventManager::add_event(Event event)
{
    this->events.push_back(event);

    return event;
}

Event EventManager::add_event(listener _listener, callback _callback)
{
    Event event(_listener, _callback);
    this->events.push_back(event);
    return event;

}

int EventManager::num_events(void)
{
    return this->events.size();
}

bool EventManager::remove_event(Event event)
{
    for(int i = 0; i < num_events(); i++)
    {
        if(this->events[i] == event)
        {
            this->events.erase(this->events.begin()+i);
            return true;
        }
    }

    return false;
}

bool EventManager::remove_event(listener _listener, callback _callback)
{
    Event event(_listener, _callback);
    return (remove_event(event));
}

bool EventManager::exists(Event event)
{
    for(int i = 0; i < num_events(); i++)
    {
        if(this->events[i] == event)
            return true;
    }

    return false;
}

void EventManager::process_events(void)
{
    for(int i = 0; i < num_events(); i++)
    {
        if(this->events[i].get_listener()())
            this->events[i].get_callback()();
    }
}
