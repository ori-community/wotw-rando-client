#include <randomizer.h>
#include <seed/items/counting_message.h>

#include <Core/core.h>
#include <Core/messages/message_controller.h>

#include <format>

namespace randomizer::seed::items {
    void CountingMessage::grant() {
        core::message_controller().queue_central({
            .text = core::Property<std::string>(message_text()),
        });
    }

    std::string CountingMessage::message_text() const {
        std::string message;
        auto total_count = targets.size();
        std::vector<core::api::uber_states::UberStateCondition> met;
        for (auto const& target : targets) {
            if (target.resolve()) {
                met.push_back(target);
                if (show_items) {
                    message += message.empty() ? ": " : ", ";
                    message += game_seed().text(target);
                }
            }
        }

        if (met.empty()) {
            message = std::format("0/{}", total_count);
        } else {
            message = std::format(
                "{2}{0}/{1}{2}{3}",
                met.size(),
                total_count,
                met.size() == total_count ? "$" : "",
                message
            );
        }

        general_text_processor()->process(*general_text_processor(), message);
        return message;
    }

    std::string CountingMessage::to_string() const {
        return std::format("counting message '{}'", message_text());
    }
} // namespace randomizer::seed::items
