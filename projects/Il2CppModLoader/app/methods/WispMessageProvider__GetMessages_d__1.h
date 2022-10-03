#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WispMessageProvider__GetMessages_d__1 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, (app::WispMessageProvider_GetMessages_d_1 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D200, bool, MoveNext, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD960, app::MessageDescriptor, IEnumerator_MessageDescriptor__get_Current, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D3F0, void, IEnumerator_Reset, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760710, WispMessageProvider_GetMessages_d_1_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0057D440, app::Object*, IEnumerator_get_Current, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D4E0, app::IEnumerator_1_MessageDescriptor_*, IEnumerable_MessageDescriptor__GetEnumerator, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D6D0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::WispMessageProvider_GetMessages_d_1 * this_ptr))
} // namespace app::classes::WispMessageProvider__GetMessages_d__1
