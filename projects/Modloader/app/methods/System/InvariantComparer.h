#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InvariantComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::InvariantComparer {
    IL2CPP_REGISTER_METHOD(0x0200CED0, void, ctor, (app::InvariantComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200CF90, int32_t, Compare, (app::InvariantComparer * this_ptr, app::Object* a, app::Object* b))
    IL2CPP_REGISTER_METHOD(0x0200D0C0, void, cctor, ())
} // namespace app::classes::System::InvariantComparer
