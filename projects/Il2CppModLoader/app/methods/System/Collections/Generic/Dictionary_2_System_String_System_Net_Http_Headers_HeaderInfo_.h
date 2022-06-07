#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::IEqualityComparer_1_System_String_ * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477F228, Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::String * key, app::HeaderInfo_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x0470C650, Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo_ * this_ptr, app::String * key, app::HeaderInfo_1 * * value))
    IL2CPP_REGISTER_METHODINFO(0x04738BF0, Dictionary_2_System_String_System_Net_Http_Headers_HeaderInfo__TryGetValue__MethodInfo)
}
