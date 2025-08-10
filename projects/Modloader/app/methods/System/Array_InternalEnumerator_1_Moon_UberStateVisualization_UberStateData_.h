#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberStateData.h>

namespace app::classes::System::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x00160580,
        void,
        ctor,
        app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr,
        app::Array* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001AD970,
        app::UberStateData,
        get_Current,
        app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001AD9C0,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr
    )
} // namespace app::classes::System::Array_InternalEnumerator_1_Moon_UberStateVisualization_UberStateData_
