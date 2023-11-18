#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugRenderer_c.h>
#include <Modloader/app/structs/LineEntity.h>

namespace app::classes::Moon::VisualDebug::DebugRenderer___c {
    IL2CPP_REGISTER_METHOD(0x011924A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugRenderer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011925E0, app::LineEntity*, __ctor_b__51_0, (app::DebugRenderer_c * this_ptr))
} // namespace app::classes::Moon::VisualDebug::DebugRenderer___c
