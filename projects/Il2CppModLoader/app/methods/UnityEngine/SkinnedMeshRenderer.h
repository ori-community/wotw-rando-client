#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::SkinnedMeshRenderer {
    IL2CPP_REGISTER_METHOD(0x0297DC60, app::Transform *, get_rootBone, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297DCB0, app::Transform__Array *, get_bones, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297DD00, void, set_bones, (app::SkinnedMeshRenderer * this_ptr, app::Transform__Array * value))
    IL2CPP_REGISTER_METHOD(0x0297DD60, app::Mesh *, get_sharedMesh, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297DDB0, void, set_sharedMesh, (app::SkinnedMeshRenderer * this_ptr, app::Mesh * value))
    IL2CPP_REGISTER_METHOD(0x0297DE10, void, BakeMesh, (app::SkinnedMeshRenderer * this_ptr, app::Mesh * mesh))
    IL2CPP_REGISTER_METHOD(0x0297DE70, app::Bounds, GetLocalAABB, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297DF00, void, SetLocalAABB, (app::SkinnedMeshRenderer * this_ptr, app::Bounds b))
    IL2CPP_REGISTER_METHOD(0x0297DF60, void, LoadSkinningMatricesIntoComputeBuffer, (app::SkinnedMeshRenderer * this_ptr, app::ComputeBuffer * compute_buffer))
    IL2CPP_REGISTER_METHOD(0x0297DFC0, bool, IsUsingComputeSkinPoseBuffer, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297DE70, app::Bounds, get_localBounds, (app::SkinnedMeshRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0297E010, void, set_localBounds, (app::SkinnedMeshRenderer * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0297E080, void, GetLocalAABB_Injected, (app::SkinnedMeshRenderer * this_ptr, app::Bounds * ret))
    IL2CPP_REGISTER_METHOD(0x0297E0E0, void, SetLocalAABB_Injected, (app::SkinnedMeshRenderer * this_ptr, app::Bounds * b))
}
