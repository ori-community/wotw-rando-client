#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WritableAttribute.h>

namespace app::classes::UnityEngine::WritableAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WritableAttribute * this_ptr))
}
