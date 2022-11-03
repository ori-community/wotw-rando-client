#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShowLoremasterScreenAction {
    IL2CPP_REGISTER_METHOD(0x005C4D90, void, Perform, (app::ShowLoremasterScreenAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowLoremasterScreenAction * this_ptr))
} // namespace app::classes::ShowLoremasterScreenAction
