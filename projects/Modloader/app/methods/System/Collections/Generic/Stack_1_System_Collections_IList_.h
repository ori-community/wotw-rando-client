#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Collections_IList_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_System_Collections_IList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741B40, Stack_1_System_Collections_IList___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_System_Collections_IList_ * this_ptr, app::IList* item))
    IL2CPP_REGISTER_METHODINFO(0x04725510, Stack_1_System_Collections_IList__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Collections_IList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759460, Stack_1_System_Collections_IList__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::IList*, Pop, (app::Stack_1_System_Collections_IList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798570, Stack_1_System_Collections_IList__Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F30, app::IList*, Peek, (app::Stack_1_System_Collections_IList_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047922E0, Stack_1_System_Collections_IList__Peek__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Collections_IList_
