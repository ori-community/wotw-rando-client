#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BindIPEndPoint.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServicePoint.h>

namespace app::classes::System::Net::BindIPEndPoint {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BindIPEndPoint* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02014F60,
        app::IPEndPoint*,
        Invoke,
        app::BindIPEndPoint* this_ptr,
        app::ServicePoint* service_point,
        app::IPEndPoint* remote_end_point,
        int32_t retry_count
    )
    IL2CPP_REGISTER_METHOD(
        0x020154D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BindIPEndPoint* this_ptr,
        app::ServicePoint* service_point,
        app::IPEndPoint* remote_end_point,
        int32_t retry_count,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IPEndPoint*, EndInvoke, app::BindIPEndPoint* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Net::BindIPEndPoint
