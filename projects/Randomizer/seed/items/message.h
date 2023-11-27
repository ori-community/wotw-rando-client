#pragma once

#include <Core/messages/message_controller.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Message final : public BaseItem {
    public:
        core::messages::MessageInfo info;
        bool should_save_as_last = false;

        void grant() override;
        std::string to_string() const override;
    };

    class MapMessage final : public BaseItem {
    public:
        std::string message;

        void grant() override;
        std::string to_string() const override;
    };
} // namespace randomizer::seed::items
