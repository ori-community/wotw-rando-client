#pragma once

namespace randomizer::messages {
    class CreditsController;
}

namespace randomizer::messages::credit_entries {
    struct BaseEntry {
    protected:
        BaseEntry(float time, float timeout);
        virtual ~BaseEntry() = default;

    public:
        virtual bool should_resolve(CreditsController* credits, float t);
        virtual bool resolve(CreditsController* credits, float t);
        virtual void reset(CreditsController* credits) = 0;

        const float time;
        const float timeout;
    };
} // namespace randomizer::messages::credit_entries