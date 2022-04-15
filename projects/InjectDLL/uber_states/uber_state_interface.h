#pragma once

#include <enums/uber_state.h>

namespace uber_states
{
    class UberState
    {
    public:
        UberState();
        UberState(UberStateGroup group, int state);

        UberState(app::IUberState* state);
        UberState(app::SerializedBooleanUberState* state) : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedByteUberState* state) : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedIntUberState* state) : UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedFloatUberState* state) : UberState(reinterpret_cast<app::IUberState*>(state)) {}

        bool valid() const;

        void set(double value, bool ignore_intercept = false, bool ignore_notify = false);
        double get() const;

        template<typename T> T get() const { return static_cast<T>(get()); }
        template<> bool get() const { return get() > 0.5; }

        UberStateGroup group() const { return m_group; }
        int state() const { return m_state; }

        std::string group_name() const;
        std::string state_name() const;

        template<typename T>
        T* ptr() const { return reinterpret_cast<T*>(ptr()); }

        void apply() const;
        app::IUberState* ptr() const;
        void notify_changed(double prev) const;
    private:
        UberStateGroup m_group;
        int m_state;
    };

    using value_notify = void(*)(UberState state, double previous_value);
    using value_intercept = bool(*)(UberState state, double value);

    void apply_all();
    void clear();

    void register_value_notify(value_notify notify);
    void register_value_intercept(value_intercept intercept);

    bool operator==(UberState const& a, UberState const& b);
}
