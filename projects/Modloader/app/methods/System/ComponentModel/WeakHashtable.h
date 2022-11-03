#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::WeakHashtable {
    IL2CPP_REGISTER_METHOD(0x0295DF70, void, ctor, (app::WeakHashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295E040, void, Clear, (app::WeakHashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295E050, void, Remove, (app::WeakHashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x0295E060, void, SetWeak, (app::WeakHashtable * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0295E210, void, ScavengeKeys, (app::WeakHashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295E6C0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::WeakHashtable
