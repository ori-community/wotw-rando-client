#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewObjectiveMessageProvider_GetMessages_d_3.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::NewObjectiveMessageProvider__GetMessages_d__3 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FC380, bool, MoveNext, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD960, app::MessageDescriptor, IEnumerator_MessageDescriptor__get_Current, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FC410, void, IEnumerator_Reset, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FC460, app::Object*, IEnumerator_get_Current, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FC500, app::IEnumerator_1_MessageDescriptor_*, IEnumerable_MessageDescriptor__GetEnumerator, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FC6F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::NewObjectiveMessageProvider_GetMessages_d_3 * this_ptr))
} // namespace app::classes::NewObjectiveMessageProvider__GetMessages_d__3
