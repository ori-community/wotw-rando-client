#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UberStateConditionType_System_Type_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/UberStateConditionType__Enum.h>

namespace app::classes::UberStateConditionHelper {
    IL2CPP_REGISTER_METHOD(0x03149800, app::Type__Array*, get_AllConditionTypes, )
    IL2CPP_REGISTER_METHOD(0x03149900, void, BuildConditionTypeData, )
    IL2CPP_REGISTER_METHOD(0x0314A080, app::Dictionary_2_UberStateConditionType_System_Type_*, get_ConditionTypes, )
    IL2CPP_REGISTER_METHOD(0x0314A180, app::Type*, GetConditionType, app::UberStateConditionType__Enum condition_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::UberStateConditionHelper
