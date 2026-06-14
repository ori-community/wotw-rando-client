#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntitySpawnSetup.h>
#include <Modloader/app/structs/EntitySpawnTask.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::EntitySpawnTask {
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::EntitySpawnSetup*, get_SpawnSetup, app::EntitySpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_SpawnSetup, app::EntitySpawnTask* this_ptr, app::EntitySpawnSetup* value)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_AreDamageDealersActive, app::EntitySpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetCustomSpawnSetup, app::EntitySpawnTask* this_ptr, app::EntitySpawnSetup* spawn_setup)
    IL2CPP_REGISTER_METHOD(0x00CA1CB0, void, OnInitializeTask, app::EntitySpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CA1F30, void, OnEnterTask, app::EntitySpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CA2170, void, OnExitTask, app::EntitySpawnTask* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CA2310, void, SetActivateDamageDealers, app::EntitySpawnTask* this_ptr, bool activate)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetPlatformMovementColliderEnabledState, app::EntitySpawnTask* this_ptr, bool enable)
    IL2CPP_REGISTER_METHOD(0x00CA23D0, void, ctor, app::EntitySpawnTask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA2530, void, _OnInitializeTask_b__10_0, app::EntitySpawnTask* this_ptr)
} // namespace app::classes::EntitySpawnTask
