#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EHiddenAreaMeshType__Enum.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/HiddenAreaMesh_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetHiddenAreaMesh.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetHiddenAreaMesh {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetHiddenAreaMesh* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CEC030,
        app::HiddenAreaMesh_t,
        Invoke,
        app::IVRSystem_GetHiddenAreaMesh* this_ptr,
        app::EVREye__Enum e_eye,
        app::EHiddenAreaMeshType__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x02CEC470,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetHiddenAreaMesh* this_ptr,
        app::EVREye__Enum e_eye,
        app::EHiddenAreaMeshType__Enum type,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::HiddenAreaMesh_t, EndInvoke, app::IVRSystem_GetHiddenAreaMesh* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetHiddenAreaMesh
