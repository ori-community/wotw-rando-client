#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InteractionLightModifier_GetKeywordsForShader_d_10.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::InteractionLightModifier__GetKeywordsForShader_d__10 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x00638A50, void, IDisposable_Dispose, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638A90, bool, MoveNext, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638C60, void, __m__Finally1, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638D00, void, IEnumerator_Reset, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B468, InteractionLightModifier_GetKeywordsForShader_d_10_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638D50, app::IEnumerator_1_System_String_*, IEnumerable_string__GetEnumerator, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638F40, app::IEnumerator*, IEnumerable_GetEnumerator, (app::InteractionLightModifier_GetKeywordsForShader_d_10 * this_ptr))
} // namespace app::classes::InteractionLightModifier__GetKeywordsForShader_d__10
