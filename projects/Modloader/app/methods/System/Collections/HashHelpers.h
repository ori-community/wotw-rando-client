#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::HashHelpers {
    IL2CPP_REGISTER_METHOD(0x02022AD0, app::ConditionalWeakTable_2_System_Object_System_Runtime_Serialization_SerializationInfo_*, get_SerializationInfoTable, ())
    IL2CPP_REGISTER_METHOD(0x02022CC0, bool, IsPrime, (int32_t candidate))
    IL2CPP_REGISTER_METHOD(0x02022DA0, int32_t, GetPrime, (int32_t min))
    IL2CPP_REGISTER_METHODINFO(0x0475DB10, HashHelpers_1_GetPrime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02022F90, int32_t, ExpandPrime, (int32_t old_size))
    IL2CPP_REGISTER_METHOD(0x02023060, void, cctor, ())
} // namespace app::classes::System::Collections::HashHelpers
