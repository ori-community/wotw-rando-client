#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SelectionBaseAttribute.h>

namespace app::classes::UnityEngine::SelectionBaseAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SelectionBaseAttribute* this_ptr)
}
