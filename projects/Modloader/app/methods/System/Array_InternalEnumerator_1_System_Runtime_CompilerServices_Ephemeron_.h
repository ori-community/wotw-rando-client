#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed.h>
#include <Modloader/app/structs/Ephemeron.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron_ {
    IL2CPP_REGISTER_METHOD(
        0x00160580,
        void,
        ctor,
        app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr,
        app::Array* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0019D470, app::Ephemeron, get_Current, app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0019D4A0,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron___Boxed* this_ptr
    )
} // namespace app::classes::System::Array_InternalEnumerator_1_System_Runtime_CompilerServices_Ephemeron_
