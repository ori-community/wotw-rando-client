#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/fsMetaType_AotFailureException.h>

namespace app::classes::FullSerializer::fsMetaType_AotFailureException {
    IL2CPP_REGISTER_METHOD(0x01514440, void, ctor, app::fsMetaType_AotFailureException* this_ptr, app::String* reason)
}
