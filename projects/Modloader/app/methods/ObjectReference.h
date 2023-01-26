#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectReference.h>

namespace app::classes::ObjectReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectReference * this_ptr))
}
