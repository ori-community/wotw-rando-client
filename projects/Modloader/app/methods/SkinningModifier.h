#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkinningModifier.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::SkinningModifier {
    IL2CPP_REGISTER_METHOD(0x006BF180, void, OnEnable, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BF410, void, OnDisable, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BF480, void, ResizeLists, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BF590, void, InitializeBonePostions, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BFCB0, void, UpdateInitialBonePositions, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0230, void, UpdatePositions, (app::SkinningModifier * this_ptr, bool editor_mode))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0650, void, OnUpdatePhysics, (app::SkinningModifier * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (app::SkinningModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006C0860, app::SuspendableMask__Enum, get_Mask, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0870, void, set_Mask, (app::SkinningModifier * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_TimelineSamplePriority, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0880, void, TimelineSample, (app::SkinningModifier * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x006C0880, void, EnterTimelinePreview, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0880, void, ExitTimelinePreview, (app::SkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0890, void, ctor, (app::SkinningModifier * this_ptr))
} // namespace app::classes::SkinningModifier
