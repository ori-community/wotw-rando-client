#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKe_TValu_KeyCollectio_UnityEngin_GameObjec_Mo_Renderi_SliceRenderSettin_Sli_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr,
        app::GameObject* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr,
        app::GameObject* key,
        app::SliceRenderSettings_Slice__Array* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_*,
        get_Keys,
        app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::SliceRenderSettings_Slice__Array*,
        get_Item,
        app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr,
        app::GameObject* key
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr,
        app::GameObject* key,
        app::SliceRenderSettings_Slice__Array* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___
