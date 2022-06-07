#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753508, Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::StackTrace *, get_Item, (app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ * this_ptr, app::Thread * key))
    IL2CPP_REGISTER_METHODINFO(0x04722540, Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ * this_ptr, app::Thread * key, app::StackTrace * value))
    IL2CPP_REGISTER_METHODINFO(0x0476E9C8, Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_ * this_ptr, app::Thread * key))
    IL2CPP_REGISTER_METHODINFO(0x0476E448, Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace__Remove__MethodInfo)
}
