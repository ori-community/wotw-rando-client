#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DummyGizmoTest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::DummyGizmoTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::DummyGizmoTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE8B20, void, ctor, (app::DummyGizmoTest * this_ptr))
} // namespace app::classes::DummyGizmoTest
