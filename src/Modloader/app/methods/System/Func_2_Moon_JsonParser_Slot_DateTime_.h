#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Func_2_Moon_JsonParser_Slot_DateTime_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_Moon_JsonParser_Slot_DateTime_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02885E00, app::DateTime, Invoke, app::Func_2_Moon_JsonParser_Slot_DateTime_* this_ptr, app::JsonParser_Slot arg)
    IL2CPP_REGISTER_METHOD(
        0x02886210,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_Moon_JsonParser_Slot_DateTime_* this_ptr,
        app::JsonParser_Slot arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F52480, app::DateTime, EndInvoke, app::Func_2_Moon_JsonParser_Slot_DateTime_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_DateTime_
