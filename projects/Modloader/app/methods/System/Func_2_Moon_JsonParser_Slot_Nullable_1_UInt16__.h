#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/JsonParser_Slot.h>
#include <Modloader/app/structs/Nullable_1_UInt16_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028872B0, app::Nullable_1_UInt16_, Invoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02888950, app::IAsyncResult*, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Nullable_1_UInt16_, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Moon_JsonParser_Slot_Nullable_1_UInt16__
