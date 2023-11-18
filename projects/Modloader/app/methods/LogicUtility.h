#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogicUtility_ComparisonType__Enum.h>
#include <Modloader/app/structs/LogicUtility.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LogicUtility {
    IL2CPP_REGISTER_METHOD(0x009EC800, bool, Compare, (float a, float b, app::LogicUtility_ComparisonType__Enum comparison))
    IL2CPP_REGISTER_METHOD(0x009EC870, app::String*, GetComparisonNiceName, (app::String * a, app::String* b, app::LogicUtility_ComparisonType__Enum comparison))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LogicUtility * this_ptr))
} // namespace app::classes::LogicUtility
