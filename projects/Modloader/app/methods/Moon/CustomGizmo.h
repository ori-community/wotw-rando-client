#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/CustomGizmo.h>

namespace app::classes::Moon::CustomGizmo {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, (app::CustomGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CustomGizmo * this_ptr, app::Type* type))
} // namespace app::classes::Moon::CustomGizmo
