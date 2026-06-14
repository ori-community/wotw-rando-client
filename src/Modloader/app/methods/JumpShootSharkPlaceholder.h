#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumpShootSharkPlaceholder.h>
#include <Modloader/app/structs/LegacyEntity.h>

namespace app::classes::JumpShootSharkPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00E4F470, app::LegacyEntity*, Instantiate, app::JumpShootSharkPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4F940, void, ctor, app::JumpShootSharkPlaceholder* this_ptr)
} // namespace app::classes::JumpShootSharkPlaceholder
