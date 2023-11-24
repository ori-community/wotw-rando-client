#include <randomizer.h>
#include <seed/items/counting_message.h>

#include <Core/core.h>
#include <Core/messages/message_controller.h>

#include <fmt/core.h>

namespace randomizer::seed::items {
    void CountingMessage::grant() {
        core::message_controller().queue_central({
            .text = message_text(),
        });
    }

    std::string CountingMessage::message_text() {
        std::string message;
        auto total_count = targets.size();
        std::vector<core::api::uber_states::UberStateCondition> met;
        for (auto const& target : targets) {
            if (target.resolve()) {
                met.push_back(target);
                if (show_items) {
                    message += game_seed().text(target);
                    message += message.empty() ? ": " : ", ";
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

        return message;
    }
} // namespace randomizer::seed::items
