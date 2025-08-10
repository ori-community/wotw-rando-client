#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartFlipSpaceCheck.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::CartFlipSpaceCheck {
    IL2CPP_REGISTER_METHOD(0x00B38BC0, void, OnDisable, app::CartFlipSpaceCheck* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B38BD0, void, Clear, app::CartFlipSpaceCheck* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B38CA0, void, OnTriggerEnter, app::CartFlipSpaceCheck* this_ptr, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x00B38D50, void, OnTriggerExit, app::CartFlipSpaceCheck* this_ptr, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x00B38DF0, bool, ValidSpaceToFlip, app::CartFlipSpaceCheck* this_ptr, int32_t mask)
    IL2CPP_REGISTER_METHOD(0x00B39060, void, ctor, app::CartFlipSpaceCheck* this_ptr)
} // namespace app::classes::CartFlipSpaceCheck
