#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Threading_Thread_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Threading_Thread_.h>
#include <Modloader/app/structs/Thread.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_Threading_Thread_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_System_Threading_Thread_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, app::HashSet_1_System_Threading_Thread_* this_ptr, app::Thread* item)
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_Threading_Thread_, GetEnumerator, app::HashSet_1_System_Threading_Thread_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_System_Threading_Thread_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_System_Threading_Thread_* this_ptr, app::Thread* item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_System_Threading_Thread_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_Threading_Thread_
