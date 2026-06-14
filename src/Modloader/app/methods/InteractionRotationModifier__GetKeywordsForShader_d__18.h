#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/InteractionRotationModifier_GetKeywordsForShader_d_18.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::InteractionRotationModifier__GetKeywordsForShader_d__18 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x0063B410, void, IDisposable_Dispose, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063B450, bool, MoveNext, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063B620, void, __m__Finally1, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063B6C0, void, IEnumerator_Reset, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0063B710,
        app::IEnumerator_1_System_String_*,
        IEnumerable_string__GetEnumerator,
        app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0063B900, app::IEnumerator*, IEnumerable_GetEnumerator, app::InteractionRotationModifier_GetKeywordsForShader_d_18* this_ptr)
} // namespace app::classes::InteractionRotationModifier__GetKeywordsForShader_d__18
