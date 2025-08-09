#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed.h>
#include <Modloader/app/structs/Queue_1_UberWaterControl_ImpactBuf_.h>
#include <Modloader/app/structs/UberWaterControl_ImpactBuf.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_UberWaterControl_ImpactBuf_ {
    IL2CPP_REGISTER_METHOD(
        0x001ECB90,
        void,
        ctor,
        app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr,
        app::Queue_1_UberWaterControl_ImpactBuf_* q
    )
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE850, bool, MoveNext, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE860, app::UberWaterControl_ImpactBuf, get_Current, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE8A0, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE8B0, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EE960, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_UberWaterControl_ImpactBuf___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_UberWaterControl_ImpactBuf_
