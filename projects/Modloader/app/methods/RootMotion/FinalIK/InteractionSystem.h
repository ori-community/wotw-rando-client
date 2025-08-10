#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionObject__Array.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/InteractionTrigger_Range.h>
#include <Modloader/app/structs/List_1_RootMotion_FinalIK_InteractionTrigger_.h>

namespace app::classes::RootMotion::FinalIK::InteractionSystem {
    IL2CPP_REGISTER_METHOD(0x02A0E140, void, OpenTutorial1, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E200, void, OpenTutorial2, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E2C0, void, OpenTutorial3, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E380, void, OpenTutorial4, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E440, void, SupportGroup, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E500, void, ASThread, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E5C0, bool, get_inInteraction, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0E6D0, bool, IsInInteraction, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0E7E0, bool, IsPaused_1, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0E8F0, bool, IsPaused_2, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0EA00, bool, IsInSync, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A0EB80,
        bool,
        StartInteraction,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector_type,
        app::InteractionObject* interaction_object,
        bool interrupt
    )
    IL2CPP_REGISTER_METHOD(0x02A0ED10, bool, PauseInteraction, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0EDD0, bool, ResumeInteraction, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0EE90, bool, StopInteraction, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0EF50, void, PauseAll, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0EFF0, void, ResumeAll, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0F0F0, void, StopAll, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A0F180,
        app::InteractionObject*,
        GetInteractionObject,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector_type
    )
    IL2CPP_REGISTER_METHOD(0x02A0F230, float, GetProgress, app::InteractionSystem* this_ptr, app::FullBodyBipedEffector__Enum effector_type)
    IL2CPP_REGISTER_METHOD(0x02A0F310, float, GetMinActiveProgress, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0F470, bool, TriggerInteraction_1, app::InteractionSystem* this_ptr, int32_t index, bool interrupt)
    IL2CPP_REGISTER_METHOD(
        0x02A0F710,
        bool,
        TriggerInteraction_2,
        app::InteractionSystem* this_ptr,
        int32_t index,
        bool interrupt,
        app::InteractionObject** interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02A0F9F0,
        bool,
        TriggerInteraction_3,
        app::InteractionSystem* this_ptr,
        int32_t index,
        bool interrupt,
        app::InteractionTarget** interaction_target
    )
    IL2CPP_REGISTER_METHOD(0x02A0FDB0, app::InteractionTrigger_Range*, GetClosestInteractionRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0FEE0, app::InteractionObject*, GetClosestInteractionObjectInRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A0FF40, app::InteractionTarget*, GetClosestInteractionTargetInRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A10000, app::InteractionObject__Array*, GetClosestInteractionObjectsInRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A101A0, app::InteractionTarget__Array*, GetClosestInteractionTargetsInRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A10420, bool, TriggerEffectorsReady, app::InteractionSystem* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02A108B0, app::InteractionTrigger_Range*, GetTriggerRange, app::InteractionSystem* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02A10A20, int32_t, GetClosestTriggerIndex, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::FullBodyBipedIK*, get_ik, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::List_1_RootMotion_FinalIK_InteractionTrigger_*, get_triggersInRange, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_triggersInRange, app::InteractionSystem* this_ptr, app::List_1_RootMotion_FinalIK_InteractionTrigger_* value)
    IL2CPP_REGISTER_METHOD(0x02A10CC0, void, Start, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A11740,
        void,
        InteractionPause,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02A11760,
        void,
        InteractionResume,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02A11760,
        void,
        InteractionStop,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02A11780,
        void,
        LookAtInteraction,
        app::InteractionSystem* this_ptr,
        app::FullBodyBipedEffector__Enum effector,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(0x02A118D0, void, OnTriggerEnter, app::InteractionSystem* this_ptr, app::Collider* c)
    IL2CPP_REGISTER_METHOD(0x02A119F0, void, OnTriggerExit, app::InteractionSystem* this_ptr, app::Collider* c)
    IL2CPP_REGISTER_METHOD(0x02A11AF0, bool, ContactIsInRange, app::InteractionSystem* this_ptr, int32_t index, int32_t* best_range_index)
    IL2CPP_REGISTER_METHOD(0x02A11D00, void, OnDrawGizmosSelected, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A11D70, void, Update, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12290, void, Raycasting, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12430, void, UpdateTriggerEventBroadcasting, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12750, void, LateUpdate, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12970, void, OnPreFBBIK, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12A80, void, OnPostFBBIK, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A12C10, void, OnDestroy, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A133A0, bool, IsValid, app::InteractionSystem* this_ptr, bool log)
    IL2CPP_REGISTER_METHOD(0x02A134C0, bool, TriggerIndexIsValid, app::InteractionSystem* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02A13650, void, OpenUserManual, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A13710, void, OpenScriptReference, app::InteractionSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A137D0, void, ctor, app::InteractionSystem* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::InteractionSystem
