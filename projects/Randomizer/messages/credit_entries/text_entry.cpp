#include <Randomizer/messages/credit_entries/text_entry.h>
#include <Randomizer/messages/credits_controller.h>

#include <Core/api/messages/message_box.h>

namespace randomizer::messages::credit_entries {

    TextEntry::TextEntry(float start_time, float duration, int id)
            : BaseEntry(start_time, duration)
            , m_id(id) {}

    bool TextEntry::resolve(CreditsController* credits, float time) {
        if (!m_started) {
            credits->message_box(m_id).show(false, false);
            m_started = true;
        }

        return BaseEntry::resolve(credits, time);
    }

    void TextEntry::reset(CreditsController* credits) {
        credits->message_box(m_id).hide();
        m_started = false;
    }
} // namespace randomizer::messages::credit_entries
