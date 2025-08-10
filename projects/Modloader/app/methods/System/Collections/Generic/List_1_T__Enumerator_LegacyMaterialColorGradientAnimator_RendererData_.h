#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData.h>
#include <Modloader/app/structs/List_1_LegacyMaterialColorGradientAnimator_RendererData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_LegacyMaterialColorGradientAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x0014D030,
        void,
        ctor,
        app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr,
        app::List_1_LegacyMaterialColorGradientAnimator_RendererData_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D070, bool, MoveNext, app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D150, bool, MoveNextRare, app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133A80,
        app::LegacyMaterialColorGradientAnimator_RendererData,
        get_Current,
        app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0014D1A0,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014D260, void, IEnumerator_Reset, app::List_1_T_Enumerator_LegacyMaterialColorGradientAnimator_RendererData___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_LegacyMaterialColorGradientAnimator_RendererData_
