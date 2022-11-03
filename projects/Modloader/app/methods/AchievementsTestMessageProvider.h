#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AchievementsTestMessageProvider {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetText, (app::AchievementsTestMessageProvider * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x004BD710, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::AchievementsTestMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::AchievementsTestMessageProvider * this_ptr))
} // namespace app::classes::AchievementsTestMessageProvider
