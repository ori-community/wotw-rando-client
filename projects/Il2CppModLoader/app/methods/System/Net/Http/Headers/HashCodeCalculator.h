#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::HashCodeCalculator {
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_1, (app::ICollection_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_2, (app::ICollection_1_System_Net_Http_Headers_NameValueHeaderValue_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04785B88, HashCodeCalculator_Calculate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_3, (app::ICollection_1_System_String_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0478B938, HashCodeCalculator_Calculate_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0209EAF0, int32_t, Calculate_4, (app::ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04719E40, HashCodeCalculator_Calculate_3__MethodInfo)
}
