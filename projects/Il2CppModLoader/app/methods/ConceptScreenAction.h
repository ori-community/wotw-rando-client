#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ConceptScreenAction {
    IL2CPP_REGISTER_METHOD(0x011E3CC0, void, Perform, (app::ConceptScreenAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ConceptScreenAction * this_ptr))
} // namespace app::classes::ConceptScreenAction
