#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::OperationUtils {
    IL2CPP_REGISTER_METHOD(0x031137A0, float, Operate_1, (float a, float b, app::OperationMethod__Enum om, float delta))
    IL2CPP_REGISTER_METHOD(0x031137F0, int32_t, Operate_2, (int32_t a, int32_t b, app::OperationMethod__Enum om))
    IL2CPP_REGISTER_METHOD(0x03113830, app::Vector3, Operate_3, (app::Vector3 a, app::Vector3 b, app::OperationMethod__Enum om))
    IL2CPP_REGISTER_METHOD(0x03113AB0, app::String*, GetOperationString, (app::OperationMethod__Enum om))
} // namespace app::classes::OperationUtils
