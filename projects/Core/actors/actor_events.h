#pragma once

namespace core::actors {
    enum class ActorEvent {
        Enabled,
        Disabled,
        Update,
    };

    struct ActorEventParam {
        union data_t {
            bool b;
            int i;
            float f;
            void* ptr;
        };

        explicit ActorEventParam(const bool data) { m_data.b = data; }
        explicit ActorEventParam(const int data) { m_data.i = data; }
        explicit ActorEventParam(const float data) { m_data.f = data; }
        explicit ActorEventParam(void* data) { m_data.ptr = data; }

        template<ActorEvent e>
        auto get() const;
    private:
        data_t m_data;
    };

    template<>
    inline auto ActorEventParam::get<ActorEvent::Update>() const {
        return m_data.f;
    }
}