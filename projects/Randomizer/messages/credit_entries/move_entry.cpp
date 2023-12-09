#include <Randomizer/messages/credit_entries/move_entry.h>
#include <Randomizer/messages/credits_controller.h>

#include <Modloader/il2cpp_math.h>

namespace randomizer::messages::credit_entries {

    MoveEntry::MoveEntry(float start_time, float duration, int id, app::Vector3 from, app::Vector3 to)
            : BaseEntry(start_time, duration)
            , m_id(id)
            , m_from(from)
            , m_to(to) {}

    bool MoveEntry::resolve(CreditsController* credits, float t) {
        credits->message_box(m_id).position().set(modloader::math::lerp(m_from, m_to, (t - m_start_time) / m_duration));
        return BaseEntry::resolve(credits, t);
    }

    void MoveEntry::reset(CreditsController* credits) {
        credits->message_box(m_id).position().set(m_to);
    }
} // namespace randomizer::messages::credit_entries
