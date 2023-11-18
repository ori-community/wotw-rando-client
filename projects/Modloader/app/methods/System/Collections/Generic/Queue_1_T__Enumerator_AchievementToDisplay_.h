#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_T_Enumerator_AchievementToDisplay___Boxed.h>
#include <Modloader/app/structs/AchievementToDisplay.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_AchievementToDisplay_.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_AchievementToDisplay_ {
    IL2CPP_REGISTER_METHOD(0x001ECB90, void, ctor, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr, app::Queue_1_AchievementToDisplay_* q))
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECBE0, bool, MoveNext, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECBF0, app::AchievementToDisplay, get_Current, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECC30, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECC40, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECCF0, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_AchievementToDisplay___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_AchievementToDisplay_
