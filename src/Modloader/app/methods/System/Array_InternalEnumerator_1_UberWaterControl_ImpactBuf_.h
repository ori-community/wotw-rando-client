#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberWaterControl_ImpactBuf.h>

namespace app::classes::System::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001746B0,
        app::UberWaterControl_ImpactBuf,
        get_Current,
        app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001746E0, app::Object*, IEnumerator_get_Current, app::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf___Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_UberWaterControl_ImpactBuf_
