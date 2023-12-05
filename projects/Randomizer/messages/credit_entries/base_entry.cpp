#include <Randomizer/messages/credit_entries/base_entry.h>

namespace randomizer::messages::credit_entries {
    BaseEntry::BaseEntry(float time, float timeout)
            : time(time)
            , timeout(timeout) {}

    bool BaseEntry::should_resolve(CreditsController* credits, float t) {
        return t >= time;
    }

    bool BaseEntry::resolve(CreditsController* credits, float t) {
        auto finished = t >= time + timeout;
        if (finished) {
            reset(credits);
        }

        return finished;
    }
} // namespace randomizer::messages::credit_entries
