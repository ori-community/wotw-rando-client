#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShowQuestHint {
    IL2CPP_REGISTER_METHOD(0x00736B70, void, Perform, (app::ShowQuestHint * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04750F98, ShowQuestHint_Perform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowQuestHint * this_ptr))
} // namespace app::classes::ShowQuestHint
