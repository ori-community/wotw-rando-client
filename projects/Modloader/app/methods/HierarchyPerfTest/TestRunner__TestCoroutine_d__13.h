#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestRunner_TestCoroutine_d_13.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::HierarchyPerfTest::TestRunner__TestCoroutine_d__13 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TestRunner_TestCoroutine_d_13 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TestRunner_TestCoroutine_d_13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01977570, bool, MoveNext, (app::TestRunner_TestCoroutine_d_13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::TestRunner_TestCoroutine_d_13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01977650, void, IEnumerator_Reset, (app::TestRunner_TestCoroutine_d_13 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TestRunner_TestCoroutine_d_13 * this_ptr))
} // namespace app::classes::HierarchyPerfTest::TestRunner__TestCoroutine_d__13
