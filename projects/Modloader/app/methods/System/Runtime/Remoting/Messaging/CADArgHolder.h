#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CADArgHolder.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CADArgHolder {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::CADArgHolder * this_ptr, int32_t i))
}
