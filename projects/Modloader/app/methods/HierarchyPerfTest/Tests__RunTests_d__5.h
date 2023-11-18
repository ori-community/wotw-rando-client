#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Tests_RunTests_d_5.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::HierarchyPerfTest::Tests__RunTests_d__5 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::Tests_RunTests_d_5 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::Tests_RunTests_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0197CC50, bool, MoveNext, (app::Tests_RunTests_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::Tests_RunTests_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0197F9D0, void, IEnumerator_Reset, (app::Tests_RunTests_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::Tests_RunTests_d_5 * this_ptr))
} // namespace app::classes::HierarchyPerfTest::Tests__RunTests_d__5
