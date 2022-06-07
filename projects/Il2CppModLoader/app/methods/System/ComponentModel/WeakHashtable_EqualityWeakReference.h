#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::WeakHashtable_EqualityWeakReference {
    IL2CPP_REGISTER_METHOD(0x0295E800, void, ctor, (app::WeakHashtable_EqualityWeakReference * this_ptr, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x0295E850, bool, Equals, (app::WeakHashtable_EqualityWeakReference * this_ptr, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, GetHashCode, (app::WeakHashtable_EqualityWeakReference * this_ptr))
}
