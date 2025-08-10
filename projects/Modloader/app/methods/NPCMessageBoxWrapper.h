#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMessageProvider.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/NPCMessageBoxWrapper.h>

namespace app::classes::NPCMessageBoxWrapper {
    IL2CPP_REGISTER_METHOD(0x00881EE0, void, ShowMessage, app::NPCMessageBoxWrapper* this_ptr, app::IMessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(
        0x00882040,
        void,
        ShowInteractionMessage,
        app::NPCMessageBoxWrapper* this_ptr,
        app::IMessageProvider* message_provider,
        app::InteractionSettings* interaction_settings
    )
    IL2CPP_REGISTER_METHOD(0x008821B0, void, HideMessage, app::NPCMessageBoxWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00882280, bool, get_IsActiveAndEnabled, app::NPCMessageBoxWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NPCMessageBoxWrapper* this_ptr)
} // namespace app::classes::NPCMessageBoxWrapper
