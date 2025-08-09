#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PickupContext.h>
#include <Modloader/app/structs/PickupMessageIcon.h>
#include <Modloader/app/structs/PickupMessageIcon_PickupType__Enum.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::PickupMessageIcon {
    IL2CPP_REGISTER_METHOD(0x01159630, void, SetIcon, app::PickupMessageIcon* this_ptr, app::Texture2D* icon)
    IL2CPP_REGISTER_METHOD(0x011596E0, void, SetName, app::PickupMessageIcon* this_ptr, app::MessageProvider* name)
    IL2CPP_REGISTER_METHOD(0x011597A0, void, SetSubText, app::PickupMessageIcon* this_ptr, app::PickupMessageIcon_PickupType__Enum type)
    IL2CPP_REGISTER_METHOD(0x011598C0, void, SetDescription, app::PickupMessageIcon* this_ptr, app::MessageProvider* description)
    IL2CPP_REGISTER_METHOD(0x01159980, void, SetFromContext, app::PickupMessageIcon* this_ptr, app::PickupContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PickupMessageIcon* this_ptr)
} // namespace app::classes::PickupMessageIcon
