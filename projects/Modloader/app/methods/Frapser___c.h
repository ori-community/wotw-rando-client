#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Frapser_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Frapser___c {
    IL2CPP_REGISTER_METHOD(0x016462D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Frapser_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01646410, bool, _IsFrapserActive_b__1_0, (app::Frapser_c * this_ptr, app::String* argument))
} // namespace app::classes::Frapser___c
