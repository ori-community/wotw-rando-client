#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CompleteQuest {
    IL2CPP_REGISTER_METHOD(0x011DEFC0, void, Perform, (app::CompleteQuest * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CompleteQuest * this_ptr))
} // namespace app::classes::CompleteQuest
