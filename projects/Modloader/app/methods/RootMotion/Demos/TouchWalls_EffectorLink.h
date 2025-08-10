#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/TouchWalls_EffectorLink.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::TouchWalls_EffectorLink {
    IL2CPP_REGISTER_METHOD(0x02047870, void, Initiate, app::TouchWalls_EffectorLink* this_ptr, app::InteractionSystem* interaction_system)
    IL2CPP_REGISTER_METHOD(0x02048190, bool, FindWalls, app::TouchWalls_EffectorLink* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x020482B0, void, Update, app::TouchWalls_EffectorLink* this_ptr, app::InteractionSystem* interaction_system)
    IL2CPP_REGISTER_METHOD(0x02049150, void, StopTouch, app::TouchWalls_EffectorLink* this_ptr, app::InteractionSystem* interaction_system)
    IL2CPP_REGISTER_METHOD(
        0x020494B0,
        void,
        OnInteractionStart,
        app::TouchWalls_EffectorLink* this_ptr,
        app::FullBodyBipedEffector__Enum effector_type,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02049580,
        void,
        OnInteractionResume,
        app::TouchWalls_EffectorLink* this_ptr,
        app::FullBodyBipedEffector__Enum effector_type,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(
        0x02049650,
        void,
        OnInteractionStop,
        app::TouchWalls_EffectorLink* this_ptr,
        app::FullBodyBipedEffector__Enum effector_type,
        app::InteractionObject* interaction_object
    )
    IL2CPP_REGISTER_METHOD(0x02049720, void, Destroy, app::TouchWalls_EffectorLink* this_ptr, app::InteractionSystem* interaction_system)
    IL2CPP_REGISTER_METHOD(0x02049B10, void, ctor, app::TouchWalls_EffectorLink* this_ptr)
} // namespace app::classes::RootMotion::Demos::TouchWalls_EffectorLink
