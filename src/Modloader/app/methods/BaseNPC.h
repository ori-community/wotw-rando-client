#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BaseNPC.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::BaseNPC {
    IL2CPP_REGISTER_METHOD(0x00F86A90, void, Awake, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F86B30, void, OnDestroy, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F86BD0, bool, MessageBoxHidden, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F86C70,
        void,
        StartInteraction,
        app::BaseNPC* this_ptr,
        app::InteractionSettings* interaction_settings,
        app::String* replace,
        app::String* with
    )
    IL2CPP_REGISTER_METHOD(0x00F87110, void, PlayListenAnim, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F87220,
        void,
        ShowText,
        app::BaseNPC* this_ptr,
        app::MessageProvider* message_provider,
        app::Action_1_MessageBox_HideAction_* on_message_hide,
        app::String* replace,
        app::String* with
    )
    IL2CPP_REGISTER_METHOD(0x00F875B0, void, HideCurrentMessageBox, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F87680, void, OnMessageScreenHide, app::BaseNPC* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x00F87850, void, AssertNPCScreenVisible, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F87940, void, HideNPCScreen, app::BaseNPC* this_ptr, bool stop_anim)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::BaseNPC* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsSuspended, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsSuspended, app::BaseNPC* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, app::BaseNPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F87AC0, void, set_Mask, app::BaseNPC* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x008C5E20, void, ctor, app::BaseNPC* this_ptr)
} // namespace app::classes::BaseNPC
