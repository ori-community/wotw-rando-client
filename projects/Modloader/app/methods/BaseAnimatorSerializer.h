#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseAnimatorSerializer.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::BaseAnimatorSerializer {
    IL2CPP_REGISTER_METHOD(0x00F85D70, void, OnValidate, (app::BaseAnimatorSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F85E00, void, Serialize, (app::BaseAnimatorSerializer * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::BaseAnimatorSerializer * this_ptr))
} // namespace app::classes::BaseAnimatorSerializer
