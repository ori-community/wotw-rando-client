#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::Converter {
    IL2CPP_REGISTER_METHOD(0x01D8F4D0, app::InternalPrimitiveTypeE__Enum, ToCode, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01D8F7A0, bool, IsWriteAsByteArray, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D8F810, int32_t, TypeLength, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D8F890, app::Type *, ToArrayType, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D8F9D0, void, InitTypeA, ())
    IL2CPP_REGISTER_METHOD(0x01D90080, void, InitArrayTypeA, ())
    IL2CPP_REGISTER_METHOD(0x01D90750, app::Type *, ToType, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D90890, app::Array *, CreatePrimitiveArray, (app::InternalPrimitiveTypeE__Enum code, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01D90A10, bool, IsPrimitiveArray, (app::Type * type, app::Object * * type_information))
    IL2CPP_REGISTER_METHOD(0x01D90D80, void, InitValueA, ())
    IL2CPP_REGISTER_METHOD(0x01D913E0, app::String *, ToComType, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D91520, void, InitTypeCodeA, ())
    IL2CPP_REGISTER_METHOD(0x01D91810, app::TypeCode__Enum, ToTypeCode, (app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D91940, void, InitCodeA, ())
    IL2CPP_REGISTER_METHOD(0x01D91C80, app::InternalPrimitiveTypeE__Enum, ToPrimitiveTypeEnum, (app::TypeCode__Enum type_code))
    IL2CPP_REGISTER_METHOD(0x01D91DB0, app::Object *, FromString, (app::String * value, app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHOD(0x01D91FE0, void, cctor, ())
}
