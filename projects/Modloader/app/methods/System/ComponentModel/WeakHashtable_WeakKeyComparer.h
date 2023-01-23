#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WeakHashtable_WeakKeyComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::WeakHashtable_WeakKeyComparer {
    IL2CPP_REGISTER_METHOD(0x0295E8D0, bool, IEqualityComparer_Equals, (app::WeakHashtable_WeakKeyComparer * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x00F9BDB0, int32_t, IEqualityComparer_GetHashCode, (app::WeakHashtable_WeakKeyComparer * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WeakHashtable_WeakKeyComparer * this_ptr))
} // namespace app::classes::System::ComponentModel::WeakHashtable_WeakKeyComparer
