#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::ILGeneratorExtensions {
    IL2CPP_REGISTER_METHOD(0x03019000, void, PushInstance, app::ILGenerator* generator, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03019190, void, PushArrayInstance, app::ILGenerator* generator, int32_t args_index, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x030192D0, void, BoxIfNeeded, app::ILGenerator* generator, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03019420, void, UnboxIfNeeded, app::ILGenerator* generator, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x03019570, void, CallMethod, app::ILGenerator* generator, app::MethodInfo_1* method_info)
    IL2CPP_REGISTER_METHOD(0x030196E0, void, Return, app::ILGenerator* generator)
} // namespace app::classes::Newtonsoft::Json::Utilities::ILGeneratorExtensions
