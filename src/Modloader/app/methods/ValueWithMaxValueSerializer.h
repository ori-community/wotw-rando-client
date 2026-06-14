#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/ValueWithMaxValueSerializer.h>

namespace app::classes::ValueWithMaxValueSerializer {
    IL2CPP_REGISTER_METHOD(0x013B93D0, void, Serialize, app::ValueWithMaxValueSerializer* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ValueWithMaxValueSerializer* this_ptr)
} // namespace app::classes::ValueWithMaxValueSerializer
