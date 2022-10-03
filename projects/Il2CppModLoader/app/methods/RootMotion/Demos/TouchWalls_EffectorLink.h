#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::TouchWalls_EffectorLink {
    IL2CPP_REGISTER_METHOD(0x02047870, void, Initiate, (app::TouchWalls_EffectorLink * this_ptr, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x02048190, bool, FindWalls, (app::TouchWalls_EffectorLink * this_ptr, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x020482B0, void, Update, (app::TouchWalls_EffectorLink * this_ptr, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x02049150, void, StopTouch, (app::TouchWalls_EffectorLink * this_ptr, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x020494B0, void, OnInteractionStart, (app::TouchWalls_EffectorLink * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x04720E78, TouchWalls_EffectorLink_OnInteractionStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02049580, void, OnInteractionResume, (app::TouchWalls_EffectorLink * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x0473C948, TouchWalls_EffectorLink_OnInteractionResume__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02049650, void, OnInteractionStop, (app::TouchWalls_EffectorLink * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x0477A2B0, TouchWalls_EffectorLink_OnInteractionStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02049720, void, Destroy, (app::TouchWalls_EffectorLink * this_ptr, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x02049B10, void, ctor, (app::TouchWalls_EffectorLink * this_ptr))
} // namespace app::classes::RootMotion::Demos::TouchWalls_EffectorLink
