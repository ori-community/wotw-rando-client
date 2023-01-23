#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::DisableGameObjectWhenOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x00B953C0, void, AutoGenerate_1, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B953E0, void, AutoGenerate_2, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, float depth, float z_offset))
    IL2CPP_REGISTER_METHOD(0x00B95950, void, ManuallySetBounds, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x00B95970, void, AddTargetObjectRef, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::GameObject* obj))
    IL2CPP_REGISTER_METHOD(0x00B95A30, void, OnFrustumInstantEnabled, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B95AB0, void, OnFrustumEnter, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B95D10, void, OnFrustumExit, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_InsideFrustum, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B95F60, bool, get_AllowCacheBounds, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B95F70, app::Bounds, get_Bounds, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B963D0, void, SetIsReady, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, bool is_ready))
    IL2CPP_REGISTER_METHOD(0x00B96550, void, CreateTasks, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B968D0, void, RefreshObjectsToTimeSliceEnableList, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96A70, void, InitTasks, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96AF0, void, Awake, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96BE0, bool, IsValid, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96BF0, void, UpdateBounds, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96EF0, void, OnDestroy, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B96FD0, void, OnSceneRootPostEnable, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00B970E0, void, OnSceneRootPreDisable, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00B971C0, void, OnPoolSpawned, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B35B90, void, OnPoolDespawned, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B97280, void, StoreObjects, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::Transform* trans))
    IL2CPP_REGISTER_METHOD(0x00B97640, void, UpdateObservers, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B97830, void, OnBuild, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B979E0, void, Prewarm, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B97A80, void, ctor, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B97F10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00B97FB0, void, _OnFrustumEnter_b__25_0, (app::DisableGameObjectWhenOutOfFrustrum * this_ptr, bool success))
    IL2CPP_REGISTER_METHODINFO(0x047187B0, DisableGameObjectWhenOutOfFrustrum__OnFrustumEnter_b__25_0__MethodInfo)
} // namespace app::classes::DisableGameObjectWhenOutOfFrustrum
