#include <Randomizer/messages/credit_entries/move_entry.h>
#include <Randomizer/messages/credits_controller.h>

#include <Modloader/il2cpp_math.h>

namespace randomizer::messages::credit_entries {

    MoveEntry::MoveEntry(float time, float timeout, int id, app::Vector3 start, app::Vector3 end)
            : BaseEntry(time, timeout)
            , m_id(id)
            , m_start(start)
            , m_end(end) {}

    bool MoveEntry::resolve(CreditsController* credits, float t) {
        credits->message_box(m_id).position().set(modloader::math::lerp(m_start, m_end, (time - t) / timeout));
        return BaseEntry::resolve(credits, t);
    }

    void MoveEntry::reset(CreditsController* credits) {
        credits->message_box(m_id).position().set(m_end);
    }
} // namespace randomizer::messages::credit_entries
