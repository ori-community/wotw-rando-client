#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TranslatedMessageProvider_GetMessages_d_2.h>

namespace app::classes::TranslatedMessageProvider__GetMessages_d__2 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x00B0ABF0, void, IDisposable_Dispose, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0ACA0, bool, MoveNext, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0AF00, void, __m__Finally1, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0AF90, void, __m__Finally2, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004BD960,
        app::MessageDescriptor,
        IEnumerator_MessageDescriptor__get_Current,
        app::TranslatedMessageProvider_GetMessages_d_2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00B0B020, void, IEnumerator_Reset, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0B070, app::Object*, IEnumerator_get_Current, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00B0B110,
        app::IEnumerator_1_MessageDescriptor_*,
        IEnumerable_MessageDescriptor__GetEnumerator,
        app::TranslatedMessageProvider_GetMessages_d_2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00B0B300, app::IEnumerator*, IEnumerable_GetEnumerator, app::TranslatedMessageProvider_GetMessages_d_2* this_ptr)
} // namespace app::classes::TranslatedMessageProvider__GetMessages_d__2
