#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/MeshGenerationResult.h>
#include <Modloader/app/structs/MeshGenerationResult__Boxed.h>
#include <Modloader/app/structs/MeshGenerationStatus__Enum.h>
#include <Modloader/app/structs/MeshVertexAttributes__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TrackableId.h>

namespace app::classes::UnityEngine::Experimental::XR::MeshGenerationResult {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::TrackableId, get_MeshId, app::MeshGenerationResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FBBA0, app::Mesh*, get_Mesh, app::MeshGenerationResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FBBB0, app::MeshCollider*, get_MeshCollider, app::MeshGenerationResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00244640, app::MeshGenerationStatus__Enum, get_Status, app::MeshGenerationResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00229300, app::MeshVertexAttributes__Enum, get_Attributes, app::MeshGenerationResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024AC60, bool, Equals_1, app::MeshGenerationResult__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0024AD50, bool, Equals_2, app::MeshGenerationResult__Boxed* this_ptr, app::MeshGenerationResult other)
    IL2CPP_REGISTER_METHOD(0x0024AD90, int32_t, GetHashCode, app::MeshGenerationResult__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::Experimental::XR::MeshGenerationResult
