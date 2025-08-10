#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DataSetClearEventhandler.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::DataSetClearEventhandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DataSetClearEventhandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, app::DataSetClearEventhandler* this_ptr, app::Object* sender, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::DataSetClearEventhandler* this_ptr,
        app::Object* sender,
        app::DataTable* table,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::DataSetClearEventhandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Data::DataSetClearEventhandler
