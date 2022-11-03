#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VerletSkinningModifier {
    IL2CPP_REGISTER_METHOD(0x013C8070, void, Awake, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C8140, void, OnEnable, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeBonePostions, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePositions, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C8330, void, OnUpdatePhysics, (app::VerletSkinningModifier * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (app::VerletSkinningModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005035C0, app::SuspendableMask__Enum, get_Mask, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C84F0, void, set_Mask, (app::VerletSkinningModifier * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x013C8500, void, ctor, (app::VerletSkinningModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::VerletSkinningModifier
