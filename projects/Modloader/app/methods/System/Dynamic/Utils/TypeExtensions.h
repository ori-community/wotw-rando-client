#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Dynamic::Utils::TypeExtensions {
    IL2CPP_REGISTER_METHOD(0x01F95E10, app::MethodInfo_1*, GetAnyStaticMethodValidated, app::Type* type, app::String* name, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01F95F10, bool, MatchesArgumentTypes, app::MethodInfo_1* mi, app::Type__Array* arg_types)
    IL2CPP_REGISTER_METHOD(0x01F960D0, app::Type*, GetReturnType, app::MethodBase* mi)
    IL2CPP_REGISTER_METHOD(0x01F96220, app::TypeCode__Enum, GetTypeCode, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01F962C0, app::ParameterInfo_1__Array*, GetParametersCached, app::MethodBase* method_1)
    IL2CPP_REGISTER_METHOD(0x01F96450, void, cctor, )
} // namespace app::classes::System::Dynamic::Utils::TypeExtensions
