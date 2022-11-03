#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KuPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01244A10, void, Awake, (app::KuPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01244BA0, void, Spawn, (app::KuPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01244F80, void, AfterLoadingFromMasterFinishedAfterInstantiation, (app::KuPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047476D0, KuPlaceholder_AfterLoadingFromMasterFinishedAfterInstantiation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012452D0, void, OnSceneRootPostEnable, (app::KuPlaceholder * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KuPlaceholder * this_ptr))
} // namespace app::classes::KuPlaceholder
