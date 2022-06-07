#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LightCanvas_LightCanvasGuidManager {
    IL2CPP_REGISTER_METHOD(0x01144960, app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ *, get_UsedGuidsPerScene, ())
    IL2CPP_REGISTER_METHOD(0x01144B60, void, RegisterGuid, (app::SceneMetaData * scene_meta, int32_t guid, bool * success))
    IL2CPP_REGISTER_METHOD(0x01144F50, int32_t, GetNewGuid, (app::SceneMetaData * scene_meta))
    IL2CPP_REGISTER_METHOD(0x011452C0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01145490, void, StartObservingSceneChangedEvent, ())
    IL2CPP_REGISTER_METHOD(0x01145530, void, StopObservingSceneChangedEvent, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneChanged, (app::Scene old_scene, app::Scene new_scene))
    IL2CPP_REGISTER_METHOD(0x011455D0, void, EnsureRegistration, (app::SceneMetaData * scene_meta, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
