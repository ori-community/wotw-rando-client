#pragma once

namespace randomizer::messages {
    class CreditsController;
}

namespace randomizer::messages::credit_entries {
    struct BaseEntry {
    protected:
        BaseEntry(float start_time, float duration);
        virtual ~BaseEntry() = default;

    public:
        virtual bool should_resolve(CreditsController* credits, float t);
        virtual bool resolve(CreditsController* credits, float t);
        virtual void reset(CreditsController* credits) = 0;

        const float m_start_time;
        const float m_duration;
    };
} // namespace randomizer::messages::credit_entries
