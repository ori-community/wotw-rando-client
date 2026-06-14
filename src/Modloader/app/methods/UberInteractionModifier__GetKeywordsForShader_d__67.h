#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberInteractionModifier_GetKeywordsForShader_d_67.h>

namespace app::classes::UberInteractionModifier__GetKeywordsForShader_d__67 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FCEEF0, bool, MoveNext, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FCF050, void, IEnumerator_Reset, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FCF0A0,
        app::IEnumerator_1_System_String_*,
        IEnumerable_string__GetEnumerator,
        app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00FCF290, app::IEnumerator*, IEnumerable_GetEnumerator, app::UberInteractionModifier_GetKeywordsForShader_d_67* this_ptr)
} // namespace app::classes::UberInteractionModifier__GetKeywordsForShader_d__67
