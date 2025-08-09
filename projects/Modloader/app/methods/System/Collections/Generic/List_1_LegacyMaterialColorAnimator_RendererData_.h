#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorAnimator_RendererData.h>
#include <Modloader/app/structs/List_1_LegacyMaterialColorAnimator_RendererData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_LegacyMaterialColorAnimator_RendererData_.h>

namespace app::classes::System::Collections::Generic::List_1_LegacyMaterialColorAnimator_RendererData_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_LegacyMaterialColorAnimator_RendererData_* this_ptr,
        app::LegacyMaterialColorAnimator_RendererData* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_LegacyMaterialColorAnimator_RendererData_,
        GetEnumerator,
        app::List_1_LegacyMaterialColorAnimator_RendererData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_LegacyMaterialColorAnimator_RendererData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_LegacyMaterialColorAnimator_RendererData_
