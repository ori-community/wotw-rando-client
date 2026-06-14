#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CombinedMessageProvider_GetMessages_d_3.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::CombinedMessageProvider__GetMessages_d__3 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, app::CombinedMessageProvider_GetMessages_d_3* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::CombinedMessageProvider_GetMessages_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011DE0E0, bool, MoveNext, app::CombinedMessageProvider_GetMessages_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004BD960,
        app::MessageDescriptor,
        IEnumerator_MessageDescriptor__get_Current,
        app::CombinedMessageProvider_GetMessages_d_3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x011DE2A0, void, IEnumerator_Reset, app::CombinedMessageProvider_GetMessages_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011DE2F0, app::Object*, IEnumerator_get_Current, app::CombinedMessageProvider_GetMessages_d_3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x011DE390,
        app::IEnumerator_1_MessageDescriptor_*,
        IEnumerable_MessageDescriptor__GetEnumerator,
        app::CombinedMessageProvider_GetMessages_d_3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x011DE580, app::IEnumerator*, IEnumerable_GetEnumerator, app::CombinedMessageProvider_GetMessages_d_3* this_ptr)
} // namespace app::classes::CombinedMessageProvider__GetMessages_d__3
