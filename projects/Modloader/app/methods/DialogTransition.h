#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DialogTransition {
    IL2CPP_REGISTER_METHOD(0x00B91810, bool, Validate, (app::DialogTransition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DialogTransition * this_ptr))
} // namespace app::classes::DialogTransition
