#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TurbulenceScaleModifier_GetKeywordsForShader_d_6.h>

namespace app::classes::TurbulenceScaleModifier__GetKeywordsForShader_d__6 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1A2F0, bool, MoveNext, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1A3C0, void, IEnumerator_Reset, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00B1A410,
        app::IEnumerator_1_System_String_*,
        IEnumerable_string__GetEnumerator,
        app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00B1A600, app::IEnumerator*, IEnumerable_GetEnumerator, app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* this_ptr)
} // namespace app::classes::TurbulenceScaleModifier__GetKeywordsForShader_d__6
