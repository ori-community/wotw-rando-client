#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D001D0, app::CancellationToken, get_Current, app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CFED80,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_System_Threading_CancellationToken_
