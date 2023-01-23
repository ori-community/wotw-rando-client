#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/CultureInfo.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Globalization_CultureInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_System_Globalization_CultureInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736F60, Dictionary_2_System_Int32_System_Globalization_CultureInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_System_Globalization_CultureInfo_ * this_ptr, int32_t key, app::CultureInfo* value))
    IL2CPP_REGISTER_METHODINFO(0x04717C60, Dictionary_2_System_Int32_System_Globalization_CultureInfo__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_System_Globalization_CultureInfo_ * this_ptr, int32_t key, app::CultureInfo** value))
    IL2CPP_REGISTER_METHODINFO(0x04784D10, Dictionary_2_System_Int32_System_Globalization_CultureInfo__TryGetValue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Globalization_CultureInfo_
