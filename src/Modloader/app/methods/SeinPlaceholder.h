#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SeinPlaceholder.h>

namespace app::classes::SeinPlaceholder {
    IL2CPP_REGISTER_METHOD(0x008B8FA0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x008B9020, void, Awake, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B91B0, void, Spawn, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008B9970, void, AfterLoadingFromMasterFinishedAfterInstantiation, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008BA110, void, TandemKuAfterLoadingFromMasterFinishedAfterInstantiation, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008BA4B0, void, DisabledOriAfterInstantiation, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008BA560, void, OnSceneRootPostEnable, app::SeinPlaceholder* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, app::SeinPlaceholder* this_ptr)
} // namespace app::classes::SeinPlaceholder
