#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_System_Collections_IEnumerator_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Collections_IEnumerator_ {
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr, app::IEnumerator* item))
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F30, app::IEnumerator*, Peek, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::IEnumerator*, Pop, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_System_Collections_IEnumerator_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Collections_IEnumerator_
