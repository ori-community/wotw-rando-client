#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandTrailModifier_GetKeywordsForShader_d_4.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::SandTrailModifier__GetKeywordsForShader_d__4 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08A40, bool, MoveNext, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08AF0, void, IEnumerator_Reset, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FD70, SandTrailModifier_GetKeywordsForShader_d_4_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08B40, app::IEnumerator_1_System_String_*, IEnumerable_string__GetEnumerator, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08D20, app::IEnumerator*, IEnumerable_GetEnumerator, (app::SandTrailModifier_GetKeywordsForShader_d_4 * this_ptr))
} // namespace app::classes::SandTrailModifier__GetKeywordsForShader_d__4
