#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeQuest_.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_RuntimeQuest_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeQuest.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_RuntimeQuest_ {
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeQuest_*, get_Values, (app::Dictionary_2_MoonGuid_RuntimeQuest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722F68, Dictionary_2_MoonGuid_RuntimeQuest__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_MoonGuid_RuntimeQuest_ * this_ptr, app::MoonGuid* key))
    IL2CPP_REGISTER_METHODINFO(0x0472E2C0, Dictionary_2_MoonGuid_RuntimeQuest__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::RuntimeQuest*, get_Item, (app::Dictionary_2_MoonGuid_RuntimeQuest_ * this_ptr, app::MoonGuid* key))
    IL2CPP_REGISTER_METHODINFO(0x047518D0, Dictionary_2_MoonGuid_RuntimeQuest__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_MoonGuid_RuntimeQuest_ * this_ptr, app::MoonGuid* key, app::RuntimeQuest* value))
    IL2CPP_REGISTER_METHODINFO(0x0472DB50, Dictionary_2_MoonGuid_RuntimeQuest__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_MoonGuid_RuntimeQuest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759188, Dictionary_2_MoonGuid_RuntimeQuest___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_RuntimeQuest_
