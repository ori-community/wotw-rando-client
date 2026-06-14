#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_System_Object_.h>
#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_System_Object___Boxed.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Array.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C60, app::Object*, get_Current, app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010D3F0, void, set_Current, app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x00216090,
        void,
        ctor,
        app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr,
        app::Dictionary_2_System_Int32_System_Object_* registered_items,
        app::RendererCullingCategoryResults_Slice__Array* slices
    )
    IL2CPP_REGISTER_METHOD(0x002160A0, bool, MoveNext, app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002160B0, void, Reset, app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00216120,
        app::CullingCategoryManager_1_T_Enumerator_System_Object_,
        GetEnumerator,
        app::CullingCategoryManager_1_T_Enumerator_System_Object___Boxed* this_ptr
    )
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_System_Object_
