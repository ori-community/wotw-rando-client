#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/system/message_provider.h>
#include <Core/utils/position_converter.h>

#include <Common/ext.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageControllerB.h>
#include <Modloader/app/methods/MessageProvider.h>
#include <Modloader/app/methods/MessageZoneB.h>
#include <Modloader/app/methods/OnScreenPositions.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SwimBoostHelper.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/OnScreenPositions.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <unordered_set>
#include <xstring>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;
using namespace app::classes::CatlikeCoding::TextBox;

namespace {
    IL2CPP_INTERCEPT(MessageControllerB, app::GameObject*, ShowSpiritTreeTextMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* provider, app::Vector3 position)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowAbilityMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::EquipmentType__Enum ability)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowShardMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::GameObject* avatar, app::SpiritShardType__Enum shard_type)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowSpellMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::EquipmentType__Enum ability)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowCompleteQuestMessage, (app::MessageControllerB * t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowUpdatedQuestMessage, (app::MessageControllerB * t, app::MessageProvider* p, app::Quest* q)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowHelpMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::GameObject* avatar)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowHintSmallMessage_1, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::Vector3 position, float duration)) {
        return nullptr;
    }

    IL2CPP_INTERCEPT(SwimBoostHelper, void, Update, (app::SwimBoostHelper * this_ptr)) {
        // NOOP
        // This is the method showing the "Hold A to swim faster" message
    }

    IL2CPP_INTERCEPT(MessageZoneB, void, FixedUpdate, (app::MessageZoneB * this_ptr)) {}

    IL2CPP_INTERCEPT(MessageControllerB, app::MessageBox*, ShowPickupMessage, (app::MessageControllerB * this_ptr, app::MessageProvider* message_provider, app::PickupContext* context, bool lockInput)) {
        if (context->fields.PickupType == app::PickupMessageIcon_PickupType__Enum::QuestItem) {
            auto arr = MessageProvider::GetAllMessages(context->fields.Name);
            if (arr->max_length > 0) {
                auto name = il2cpp::convert_csstring(arr->vector[0]);
                if (name == "Gorlek Ore" || name == "Giant Spirit Light Container")
                    return nullptr;
            }
        }

        return next::MessageControllerB::ShowPickupMessage(this_ptr, message_provider, context, lockInput);
    }
} // namespace