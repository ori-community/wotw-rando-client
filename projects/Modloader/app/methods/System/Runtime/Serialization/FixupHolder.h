#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FixupHolder.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Serialization::FixupHolder {
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor, (app::FixupHolder * this_ptr, int64_t id, app::Object* fixup_info, int32_t fixup_type))
}
