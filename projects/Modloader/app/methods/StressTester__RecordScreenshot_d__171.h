#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StressTester_RecordScreenshot_d_171.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::StressTester__RecordScreenshot_d__171 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::StressTester_RecordScreenshot_d_171 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::StressTester_RecordScreenshot_d_171 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0066D4B0, bool, MoveNext, (app::StressTester_RecordScreenshot_d_171 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::StressTester_RecordScreenshot_d_171 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0066D8A0, void, IEnumerator_Reset, (app::StressTester_RecordScreenshot_d_171 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::StressTester_RecordScreenshot_d_171 * this_ptr))
} // namespace app::classes::StressTester__RecordScreenshot_d__171
