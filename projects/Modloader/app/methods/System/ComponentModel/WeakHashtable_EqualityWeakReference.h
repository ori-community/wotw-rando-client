#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WeakHashtable_EqualityWeakReference.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::WeakHashtable_EqualityWeakReference {
    IL2CPP_REGISTER_METHOD(0x0295E800, void, ctor, (app::WeakHashtable_EqualityWeakReference * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x0295E850, bool, Equals, (app::WeakHashtable_EqualityWeakReference * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, GetHashCode, (app::WeakHashtable_EqualityWeakReference * this_ptr))
} // namespace app::classes::System::ComponentModel::WeakHashtable_EqualityWeakReference
