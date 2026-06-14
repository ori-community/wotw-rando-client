#include <Randomizer/messages/credit_entries/base_entry.h>

namespace randomizer::messages::credit_entries {
    BaseEntry::BaseEntry(float start_time, float duration)
            : m_start_time(start_time)
            , m_duration(duration) {}

    bool BaseEntry::should_resolve(CreditsController* credits, float t) {
        return t >= m_start_time;
    }

    bool BaseEntry::resolve(CreditsController* credits, float t) {
        auto finished = t >= m_start_time + m_duration;
        if (finished) {
            reset(credits);
        }

        return finished;
    }
} // namespace randomizer::messages::credit_entries
