#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Reflection::ReflectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01A084B0, bool, IsEnum, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE4B0, bool, IsAbstract, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE4E0, bool, IsSealed, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD200, app::Type*, BaseType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE510, app::Assembly*, Assembly, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE540, app::TypeCode__Enum, GetTypeCode, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x023AE5E0, bool, ReflectionOnly, (app::Assembly * assm))
} // namespace app::classes::Microsoft::Reflection::ReflectionExtensions
