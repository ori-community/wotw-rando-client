#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimedActionSequence_RunSequence_d_23.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::TimedActionSequence__RunSequence_d__23 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TimedActionSequence_RunSequence_d_23 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::TimedActionSequence_RunSequence_d_23 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F37D0, bool, MoveNext, (app::TimedActionSequence_RunSequence_d_23 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::TimedActionSequence_RunSequence_d_23 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F3C20, void, IEnumerator_Reset, (app::TimedActionSequence_RunSequence_d_23 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739E30, TimedActionSequence_RunSequence_d_23_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::TimedActionSequence_RunSequence_d_23 * this_ptr))
} // namespace app::classes::TimedActionSequence__RunSequence_d__23
