#include <messages/credit_entries/text_entry.h>
#include <messages/credits_controller.h>

#include <Core/api/messages/message_box.h>

#include <utility>

namespace randomizer::messages::credit_entries {

    TextEntry::TextEntry(float time, float timeout, int id)
            : BaseEntry(time, timeout)
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
