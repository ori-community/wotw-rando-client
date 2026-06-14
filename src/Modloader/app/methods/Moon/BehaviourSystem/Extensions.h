#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IList_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/IList_1_Moon_BehaviourSystem_BehaviourNode_.h>
#include <Modloader/app/structs/IList_1_SneezeSlugBurrowBehaviour_UnburrowPointRate_.h>
#include <Modloader/app/structs/IList_1_SwarmAgent_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>

namespace app::classes::Moon::BehaviourSystem::Extensions {
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_1, app::IList_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_2, app::IList_1_Moon_BehaviourSystem_BehaviourNode_* list)
    IL2CPP_REGISTER_METHOD(0x0154EFC0, void, Shuffle_3, app::IList_1_SneezeSlugBurrowBehaviour_UnburrowPointRate_* list)
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_4, app::IList_1_EntityPlaceholder_* list)
    IL2CPP_REGISTER_METHOD(0x0154F200, void, Shuffle_5, app::IList_1_SwarmAgent_* list)
} // namespace app::classes::Moon::BehaviourSystem::Extensions
