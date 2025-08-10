#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#include <Modloader/app/structs/List_1_DistortionAnimator_RendererData_Property_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_DistortionAnimator_RendererData_Property_ {
    IL2CPP_REGISTER_METHOD(
        0x0014D770,
        void,
        ctor,
        app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr,
        app::List_1_DistortionAnimator_RendererData_Property_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D7B0, bool, MoveNext, app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D880, bool, MoveNextRare, app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001434D0,
        app::DistortionAnimator_RendererData_Property,
        get_Current,
        app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0014D8D0,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014D990, void, IEnumerator_Reset, app::List_1_T_Enumerator_DistortionAnimator_RendererData_Property___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_DistortionAnimator_RendererData_Property_
