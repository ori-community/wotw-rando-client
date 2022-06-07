#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Rail_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Rail_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707F28, List_1_Rail__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Rail_ * this_ptr, app::Rail * item))
    IL2CPP_REGISTER_METHODINFO(0x04769370, List_1_Rail__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Rail *, get_Item, (app::List_1_Rail_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04752440, List_1_Rail__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Rail_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047463B0, List_1_Rail__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Rail_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DC48, List_1_Rail___ctor__MethodInfo)
}
