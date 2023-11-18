#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DifficultyModeMessageProvider_GetMessages_d_5.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::DifficultyModeMessageProvider__GetMessages_d__5 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B925A0, bool, MoveNext, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD960, app::MessageDescriptor, IEnumerator_MessageDescriptor__get_Current, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92730, void, IEnumerator_Reset, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92780, app::Object*, IEnumerator_get_Current, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92820, app::IEnumerator_1_MessageDescriptor_*, IEnumerable_MessageDescriptor__GetEnumerator, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92A10, app::IEnumerator*, IEnumerable_GetEnumerator, (app::DifficultyModeMessageProvider_GetMessages_d_5 * this_ptr))
} // namespace app::classes::DifficultyModeMessageProvider__GetMessages_d__5
