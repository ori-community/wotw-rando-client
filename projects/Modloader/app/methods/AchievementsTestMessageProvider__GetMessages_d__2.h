#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsTestMessageProvider_GetMessages_d_2.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AchievementsTestMessageProvider__GetMessages_d__2 {
    IL2CPP_REGISTER_METHOD(0x004BD8A0, void, ctor, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD900, bool, MoveNext, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD960, app::MessageDescriptor, IEnumerator_MessageDescriptor__get_Current, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD980, void, IEnumerator_Reset, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BD9D0, app::Object*, IEnumerator_get_Current, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BDA70, app::IEnumerator_1_MessageDescriptor_*, IEnumerable_MessageDescriptor__GetEnumerator, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BDC60, app::IEnumerator*, IEnumerable_GetEnumerator, (app::AchievementsTestMessageProvider_GetMessages_d_2 * this_ptr))
} // namespace app::classes::AchievementsTestMessageProvider__GetMessages_d__2
