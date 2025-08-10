#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MoonTrailWispsHook.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MoonTrailWispsHook {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014743E0, bool, get_IsSuspended, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474430, void, set_IsSuspended, app::MoonTrailWispsHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_Mask, app::MoonTrailWispsHook* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InsideFrustum, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014744B0, app::Bounds, get_Bounds, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474670, void, OnValidate, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474710, void, Awake, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014747E0, void, OnEnable, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014749F0, void, OnDisable, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474B50, void, OnFrustumEnter, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474D00, void, OnFrustumExit, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01474EB0, void, UpdateBounds, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateType__Enum, get_UpdateType, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, app::MoonTrailWispsHook* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x014750B0, app::Vector3, get_Speed, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014750D0, void, set_Speed, app::MoonTrailWispsHook* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x014750E0, void, OnUpdate, app::MoonTrailWispsHook* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x014751D0, void, OnGoThroughPortal, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, app::MoonTrailWispsHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014751E0, void, ctor, app::MoonTrailWispsHook* this_ptr)
} // namespace app::classes::MoonTrailWispsHook
