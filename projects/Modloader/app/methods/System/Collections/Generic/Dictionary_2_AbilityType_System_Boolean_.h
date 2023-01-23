#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_AbilityType_System_Boolean_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02E38260, bool, TryGetValue, (app::Dictionary_2_AbilityType_System_Boolean_ * this_ptr, app::AbilityType__Enum key, bool* value))
    IL2CPP_REGISTER_METHODINFO(0x0472A648, Dictionary_2_AbilityType_System_Boolean__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_AbilityType_System_Boolean_ * this_ptr, app::AbilityType__Enum key, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471E9A8, Dictionary_2_AbilityType_System_Boolean__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_AbilityType_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E190, Dictionary_2_AbilityType_System_Boolean__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_AbilityType_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FC10, Dictionary_2_AbilityType_System_Boolean___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_System_Boolean_
