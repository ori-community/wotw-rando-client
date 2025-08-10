#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BatSwarmPlaceholder.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::BatSwarmPlaceholder {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, app::BatSwarmPlaceholder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F961D0, void, set_Mask, app::BatSwarmPlaceholder* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00F96280, void, Awake, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F965B0, void, OnDestroy, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::BatSwarmPlaceholder* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00F96890, void, OnGameSerializeLoad, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneRootDisabled, app::BatSwarmPlaceholder* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00F96890, void, DestroyCurrentInstance, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F96A00, void, FixedUpdate, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Spawn, app::BatSwarmPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5E20, void, ctor, app::BatSwarmPlaceholder* this_ptr)
} // namespace app::classes::BatSwarmPlaceholder
