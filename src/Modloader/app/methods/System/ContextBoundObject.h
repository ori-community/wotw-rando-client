#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextBoundObject.h>

namespace app::classes::System::ContextBoundObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ContextBoundObject* this_ptr)
}
