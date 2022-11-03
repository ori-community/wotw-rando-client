#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::UberStateMatcher_UberStateMatcherTypeIds__Enum, get_MatcherTypeID, (app::UberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314A4B0, void, InitializeData, (app::UberStateMatcher * this_ptr, int32_t booleans, int32_t ints, int32_t floats, int32_t vectors, int32_t colors))
    IL2CPP_REGISTER_METHOD(0x0314A4F0, void, Clear, (app::UberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314A520, int32_t, Resolve, (app::UberStateMatcher * this_ptr, app::IUberState* descriptor))
    IL2CPP_REGISTER_METHODINFO(0x04755430, UberStateMatcher_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0314A580, app::UberStateMatcher*, CastTo_1, (app::Type * type, app::UberStateMatcher* source_data))
    IL2CPP_REGISTER_METHOD(0x0314A7A0, app::Dictionary_2_System_Int32_System_Type_*, GetIdToTypeMap, (app::UberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314AA60, void, ctor, (app::UberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0157BC70, app::Object*, CastTo_2, (app::UberStateMatcher * source_data))
} // namespace app::classes::UberStateMatcher
