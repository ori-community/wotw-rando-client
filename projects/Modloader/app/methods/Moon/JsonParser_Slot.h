#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/JsonParser_Array.h>
#include <Modloader/app/structs/JsonParser_Object.h>
#include <Modloader/app/structs/JsonParser_Slot__Boxed.h>
#include <Modloader/app/structs/JsonToken__Enum.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Array_.h>
#include <Modloader/app/structs/Nullable_1_Moon_JsonParser_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::JsonParser_Slot {
    IL2CPP_REGISTER_METHOD(0x002459D0, void, ctor, app::JsonParser_Slot__Boxed* this_ptr, app::JsonParser* parser)
    IL2CPP_REGISTER_METHOD(0x002459E0, void, Validate, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002459F0, app::JsonToken__Enum, Peek, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245A00, app::String*, ReadOptString, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245A10, app::String*, ReadString, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245A20, app::String*, ReadStringCommon, app::JsonParser_Slot__Boxed* this_ptr, app::JsonToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x00245A30, app::Nullable_1_Double_, ReadOptF64, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245A60, double, ReadF64, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245A70, double, ReadF64Common, app::JsonParser_Slot__Boxed* this_ptr, app::JsonToken__Enum token, double number)
    IL2CPP_REGISTER_METHOD(0x00245A80, app::Nullable_1_Boolean_, ReadOptBool, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245C10, bool, ReadBool, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245C20, app::Nullable_1_Moon_JsonParser_Object_, ReadOptObject, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245C50, app::JsonParser_Object, ReadObject, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245CE0, app::JsonParser_Object, ReadObjectCommon, app::JsonParser_Slot__Boxed* this_ptr, app::JsonToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x00245D10, app::Nullable_1_Moon_JsonParser_Array_, ReadOptArray, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245D40, app::JsonParser_Array, ReadArray, app::JsonParser_Slot__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245DD0, app::JsonParser_Array, ReadArrayCommon, app::JsonParser_Slot__Boxed* this_ptr, app::JsonToken__Enum token)
    IL2CPP_REGISTER_METHOD(0x00245E00, void, Discard, app::JsonParser_Slot__Boxed* this_ptr)
} // namespace app::classes::Moon::JsonParser_Slot
