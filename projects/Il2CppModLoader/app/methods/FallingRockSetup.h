#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FallingRockSetup {
    IL2CPP_REGISTER_METHOD(0x00996AA0, void, OnDamageDealt, (app::FallingRockSetup * this_ptr, app::DamageDealer * dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x04753D30, FallingRockSetup_OnDamageDealt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00996C80, void, OnEnable, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996F90, void, OnDisable, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009971D0, void, Apply, (app::FallingRockSetup * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IUberState__Array *, get_AffectingUberStates, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009973A0, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997600, void, OnFrustumEnter, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997610, void, OnFrustumExit, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_InsideFrustum, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997620, app::Bounds, get_Bounds, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (app::FallingRockSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997640, app::Bounds, EncapsulateChildren, (app::FallingRockSetup * this_ptr, app::Transform * trans, app::Bounds * current, bool * has_bounds))
    IL2CPP_REGISTER_METHOD(0x009977D0, app::Bounds, WorldSpaceHierarchyBoundingBox, (app::FallingRockSetup * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x00997A70, void, ctor, (app::FallingRockSetup * this_ptr))
}
