#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/PrimitiveArray.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray {
    IL2CPP_REGISTER_METHOD(0x01D9E280, void, ctor, app::PrimitiveArray* this_ptr, app::InternalPrimitiveTypeE__Enum code, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x01D9E280, void, Init, app::PrimitiveArray* this_ptr, app::InternalPrimitiveTypeE__Enum code, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x01D9E4E0, void, SetValue, app::PrimitiveArray* this_ptr, app::String* value, int32_t index)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray
