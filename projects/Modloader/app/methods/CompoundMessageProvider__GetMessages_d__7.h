#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundMessageProvider_GetMessages_d_7.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::CompoundMessageProvider__GetMessages_d__7 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E1FA0, bool, MoveNext, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD960, app::MessageDescriptor, IEnumerator_MessageDescriptor__get_Current, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2570, void, IEnumerator_Reset, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E25C0, app::Object*, IEnumerator_get_Current, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2660, app::IEnumerator_1_MessageDescriptor_*, IEnumerable_MessageDescriptor__GetEnumerator, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E2850, app::IEnumerator*, IEnumerable_GetEnumerator, (app::CompoundMessageProvider_GetMessages_d_7 * this_ptr))
} // namespace app::classes::CompoundMessageProvider__GetMessages_d__7
