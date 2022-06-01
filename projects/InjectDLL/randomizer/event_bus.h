#pragma once

#include <vector>
#include <unordered_map>

enum class EventTiming
{
    Start,
    End,
};

template<typename T>
class MultiEventBus
{
public:
    using event_handler = void(*)(T, EventTiming);

    MultiEventBus() {}
    MultiEventBus(MultiEventBus const& other) = delete;

    void clear()
    {
        event_handlers.clear();
    }

    void register_handler(T value, event_handler handler)
    {
        auto& handlers = event_handlers[value];
        handlers.get(EventTiming::End).push_back(handler);
    }

    void register_handler(T value, EventTiming timing, event_handler handler)
    {
        auto& handlers = event_handlers[value];
        handlers.get(timing).push_back(handler);
    }

    void trigger_event(T value)
    {
        auto const& handlers = event_handlers[value];
        for (auto const& handler : handlers.get(EventTiming::End))
            handler(value, EventTiming::End);
    }

    void trigger_event(T value, EventTiming timing)
    {
        auto const& handlers = event_handlers[value];
        for (auto const& handler : handlers.get(timing))
            handler(value, timing);
    }
private:
    struct Handlers
    {
        std::vector<event_handler> start;
        std::vector<event_handler> end;

        std::vector<event_handler>& get(EventTiming timing) { return timing == EventTiming::Start ? start : end; }
        std::vector<event_handler> const& get(EventTiming timing) const { return timing == EventTiming::Start ? start : end; }
    };

    std::unordered_map<T, Handlers> event_handlers;
};

template<typename T>
class EventBus
{
public:
    using event_handler = void(*)(T, EventTiming);

    EventBus() {}
    EventBus(EventBus const& other) = delete;

    void clear()
    {
        event_handlers.clear();
    }

    void register_handler(event_handler handler)
    {
        event_handlers.get(EventTiming::End).push_back(handler);
    }

    void register_handler(T value, EventTiming timing, event_handler handler)
    {
        event_handlers.get(timing).push_back(handler);
    }

    void trigger_event(T value)
    {
        for (auto const& handler : event_handlers.get(EventTiming::End))
            handler(value, EventTiming::End);
    }

    void trigger_event(T value, EventTiming timing)
    {
        for (auto const& handler : event_handlers.get(timing))
            handler(value, timing);
    }
private:
    struct Handlers
    {
        std::vector<event_handler> start;
        std::vector<event_handler> end;

        std::vector<event_handler>& get(EventTiming timing) { return timing == EventTiming::Start ? start : end; }
        std::vector<event_handler> const& get(EventTiming timing) const { return timing == EventTiming::Start ? start : end; }
    };

    Handlers event_handlers;
};
