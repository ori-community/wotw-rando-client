#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonCustomDoorWithSlots.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MoonCustomDoorWithSlots {
    IL2CPP_REGISTER_METHOD(0x00F47010, int32_t, get_NumberOfOrbsUsed, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F47040, void, set_NumberOfOrbsUsed, app::MoonCustomDoorWithSlots* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00F47070, app::Vector3, get_ScenePosition, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F47210, app::Vector3, get_KeystoneStartPosition, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F475A0, bool, get_CanPlayerTriggerAutomatically, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F47730, void, FixedUpdate, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F48040, void, OpenDoor, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreOrbs, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F484E0, void, ctor, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F485B0, void, _OpenDoor_b__17_0, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_1, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_2, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_3, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_4, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_5, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_6, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_7, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_8, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_9, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_10, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_11, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_12, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_13, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_14, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_15, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_16, app::MoonCustomDoorWithSlots* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IMoonTypeResolver*, GetResolverForType_17, app::MoonCustomDoorWithSlots* this_ptr)
} // namespace app::classes::MoonCustomDoorWithSlots
