#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XRMeshSubsystem.h>
#include <Modloader/app/structs/MeshGenerationResult.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Experimental_XR_MeshGenerationResult_.h>

namespace app::classes::UnityEngine::Experimental::XR::XRMeshSubsystem {
    IL2CPP_REGISTER_METHOD(0x03176B60, void, ctor, (app::XRMeshSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03176BE0, void, InvokeMeshReadyDelegate, (app::XRMeshSubsystem * this_ptr, app::MeshGenerationResult result, app::Action_1_UnityEngine_Experimental_XR_MeshGenerationResult_* on_mesh_generation_complete))
} // namespace app::classes::UnityEngine::Experimental::XR::XRMeshSubsystem
