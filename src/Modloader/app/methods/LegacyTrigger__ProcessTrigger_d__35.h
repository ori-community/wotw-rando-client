#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyTrigger_ProcessTrigger_d_35.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::LegacyTrigger__ProcessTrigger_d__35 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0112CB30, bool, MoveNext, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0112CDD0, void, IEnumerator_Reset, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::LegacyTrigger_ProcessTrigger_d_35* this_ptr)
} // namespace app::classes::LegacyTrigger__ProcessTrigger_d__35
