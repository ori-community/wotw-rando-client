#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_TriangleNet_Topology_Otri_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Otri.h>

namespace app::classes::System::Action_1_TriangleNet_Topology_Otri_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_TriangleNet_Topology_Otri_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, app::Action_1_TriangleNet_Topology_Otri_* this_ptr, app::Otri obj)
    IL2CPP_REGISTER_METHOD(
        0x02C08890,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_TriangleNet_Topology_Otri_* this_ptr,
        app::Otri obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_1_TriangleNet_Topology_Otri_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_1_TriangleNet_Topology_Otri_
