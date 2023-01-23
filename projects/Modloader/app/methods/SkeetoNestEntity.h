#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkeetoNestEntity.h>
#include <Modloader/app/structs/List_1_SkeetoPlaceholder_.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::SkeetoNestEntity {
    IL2CPP_REGISTER_METHOD(0x0075D470, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0075D510, float, get_CameraInfluenceMinDist, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075D530, float, get_CameraInfluenceMaxDist, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075D550, void, AssignSpawners, (app::SkeetoNestEntity * this_ptr, app::List_1_SkeetoPlaceholder_* placeholders))
    IL2CPP_REGISTER_METHOD(0x0075D560, void, OnAwake, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075D850, void, OnEnable, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075DAE0, void, ResetEntity, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075DB00, void, FixedUpdate, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075DE50, void, SpawnSkeeto, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075E580, void, OnSkeetoDied, (app::SkeetoNestEntity * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHODINFO(0x0472EA98, SkeetoNestEntity_OnSkeetoDied__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnDeathTimelineEnd, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792600, SkeetoNestEntity_OnDeathTimelineEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0075E5B0, void, OnSpawnTimelineEnd, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794CD8, SkeetoNestEntity_OnSpawnTimelineEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0075E5E0, void, ApplyRepelForceForSkeetos, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075EC40, void, InstantKill, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075EFA0, void, ctor, (app::SkeetoNestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F160, void, cctor, ())
} // namespace app::classes::SkeetoNestEntity
