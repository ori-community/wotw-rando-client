#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Moon_JsonParser_Slot_Int16_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Int16_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Int16_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02886DD0, int16_t, Invoke, (app::Func_2_Moon_JsonParser_Slot_Int16_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x028871E0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Int16_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x024CEF10, int16_t, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Int16_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Int16_
