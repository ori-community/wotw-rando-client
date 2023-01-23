#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AtomicBoolean.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::AtomicBoolean {
    IL2CPP_REGISTER_METHOD(0x027D82B0, bool, TryRelaxedSet, (app::AtomicBoolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D82D0, bool, Exchange, (app::AtomicBoolean * this_ptr, bool new_val))
    IL2CPP_REGISTER_METHOD(0x027D82E0, bool, Equals_1, (app::AtomicBoolean * this_ptr, app::AtomicBoolean* rhs))
    IL2CPP_REGISTER_METHOD(0x027D8300, bool, Equals_2, (app::AtomicBoolean * this_ptr, app::Object* rhs))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::AtomicBoolean * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AtomicBoolean * this_ptr))
} // namespace app::classes::System::Threading::AtomicBoolean
