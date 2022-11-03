#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::NavMesh_OnNavMeshPreUpdate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::NavMesh_OnNavMeshPreUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::NavMesh_OnNavMeshPreUpdate * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::NavMesh_OnNavMeshPreUpdate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate
