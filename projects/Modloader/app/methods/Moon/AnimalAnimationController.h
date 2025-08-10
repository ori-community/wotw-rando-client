#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimalAnimationController.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::AnimalAnimationController {
    IL2CPP_REGISTER_METHOD(0x0168C6F0, app::Vector3, get_StartLocalPosition, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B00E50, app::Vector3, get_WaitLocalPosition, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AF840, app::Vector3, get_EndLocalPosition, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AF860, void, Awake, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AFB20, void, OnTriggerEnter, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AFB60, float, GetTweenSpeed, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AFB70, void, OnGUI, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AFCE0, void, Apply, app::AnimalAnimationController* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x031AFF40, app::IUberState__Array*, get_AffectingUberStates, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AFFD0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B0230, app::Vector3, GetData, app::AnimalAnimationController* this_ptr, int32_t export_id)
    IL2CPP_REGISTER_METHOD(0x031B0350, void, ctor, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::AnimalAnimationController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::AnimalAnimationController* this_ptr)
} // namespace app::classes::Moon::AnimalAnimationController
