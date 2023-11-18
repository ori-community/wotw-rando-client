#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_System_Int32__1.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Int32___ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Int32__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::Int32__Array*, Pop, (app::Stack_1_System_Int32__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_System_Int32__1 * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Int32___
