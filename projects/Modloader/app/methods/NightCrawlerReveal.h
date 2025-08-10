#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/NightCrawlerReveal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::NightCrawlerReveal {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006086D0, void, set_IsSuspended, app::NightCrawlerReveal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, app::NightCrawlerReveal* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00608730, void, Awake, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006088F0, void, OnEnable, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608A50, void, OnDestroy, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00608C00, void, FixedUpdate, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnGameSerializeLoad, app::NightCrawlerReveal* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourEnter,
        app::NightCrawlerReveal* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourExit,
        app::NightCrawlerReveal* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnStateMachineBehaviourUpdate,
        app::NightCrawlerReveal* this_ptr,
        app::Animator* animator,
        app::AnimatorStateInfo state_info,
        int32_t layer_index
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::NightCrawlerReveal* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x00608C50, void, StateMachineBehaviourProxy_IReceiver_OnAnimationEvent, app::NightCrawlerReveal* this_ptr, app::String* event_id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::NightCrawlerReveal* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00608D80, void, ctor, app::NightCrawlerReveal* this_ptr)
} // namespace app::classes::NightCrawlerReveal
