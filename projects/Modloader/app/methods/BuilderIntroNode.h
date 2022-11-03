#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BuilderIntroNode {
    IL2CPP_REGISTER_METHOD(0x00818170, void, OnEnter, (app::BuilderIntroNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, (app::BuilderIntroNode * this_ptr))
} // namespace app::classes::BuilderIntroNode
