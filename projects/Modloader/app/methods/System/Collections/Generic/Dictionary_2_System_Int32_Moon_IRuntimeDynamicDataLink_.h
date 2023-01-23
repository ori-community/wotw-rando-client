#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_IRuntimeDynamicDataLink_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_IRuntimeDynamicDataLink_, GetEnumerator, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047451A0, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047630B0, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr, int32_t key, app::IRuntimeDynamicDataLink* value))
    IL2CPP_REGISTER_METHODINFO(0x0471AE20, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_2, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04728398, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr, int32_t key, app::IRuntimeDynamicDataLink** value))
    IL2CPP_REGISTER_METHODINFO(0x04701CD0, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::IRuntimeDynamicDataLink*, get_Item, (app::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04777488, Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_
