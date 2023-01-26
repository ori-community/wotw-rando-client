#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistortModifier_GetKeywordsForShader_d_4.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DistortModifier__GetKeywordsForShader_d__4 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9A4F0, bool, MoveNext, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9A5B0, void, IEnumerator_Reset, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9A600, app::IEnumerator_1_System_String_*, IEnumerable_string__GetEnumerator, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9A7F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::DistortModifier_GetKeywordsForShader_d_4 * this_ptr))
} // namespace app::classes::DistortModifier__GetKeywordsForShader_d__4
