#pragma once

#include <Core/api/messages/message_controller.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Message final : public BaseItem {
    public:
        core::api::messages::CentralMessageInfo info;

        void grant() final;
    };
} // namespace randomizer::seed::items
