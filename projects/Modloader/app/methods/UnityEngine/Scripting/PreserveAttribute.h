#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PreserveAttribute.h>

namespace app::classes::UnityEngine::Scripting::PreserveAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PreserveAttribute* this_ptr)
}
