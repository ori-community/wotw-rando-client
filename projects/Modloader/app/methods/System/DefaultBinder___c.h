#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultBinder_c.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::DefaultBinder___c {
    IL2CPP_REGISTER_METHOD(0x0173D5C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DefaultBinder_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0173D700, bool, _SelectProperty_b__3_0, app::DefaultBinder_c* this_ptr, app::Type* t)
} // namespace app::classes::System::DefaultBinder___c
