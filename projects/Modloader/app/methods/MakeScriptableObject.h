#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MakeScriptableObject.h>

namespace app::classes::MakeScriptableObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, MakePlayFabSharedSettings, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MakeScriptableObject* this_ptr)
} // namespace app::classes::MakeScriptableObject
