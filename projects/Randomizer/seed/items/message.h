#pragma once

#include <Core/messages/message_controller.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Message final : public BaseItem {
    public:
        core::messages::MessageInfo info;
        bool should_save_as_last = false;

        void grant() final;
    };
} // namespace randomizer::seed::items
