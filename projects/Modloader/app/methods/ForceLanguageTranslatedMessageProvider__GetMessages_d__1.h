#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider_GetMessages_d_1.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ForceLanguageTranslatedMessageProvider__GetMessages_d__1 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x01280CF0, void, IDisposable_Dispose, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01280D30, bool, MoveNext, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01280ED0, void, __m__Finally1, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004BD960,
        app::MessageDescriptor,
        IEnumerator_MessageDescriptor__get_Current,
        app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01280F60, void, IEnumerator_Reset, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01280FB0, app::Object*, IEnumerator_get_Current, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01281050,
        app::IEnumerator_1_MessageDescriptor_*,
        IEnumerable_MessageDescriptor__GetEnumerator,
        app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01281240, app::IEnumerator*, IEnumerable_GetEnumerator, app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* this_ptr)
} // namespace app::classes::ForceLanguageTranslatedMessageProvider__GetMessages_d__1
