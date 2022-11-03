#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MessageNodeWisps {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMessageBox*, get_MessageBox, (app::MessageNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159B160, void, OnEnter, (app::MessageNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159B400, void, OnExit, (app::MessageNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0159B580, void, ctor, (app::MessageNodeWisps * this_ptr))
} // namespace app::classes::MessageNodeWisps
