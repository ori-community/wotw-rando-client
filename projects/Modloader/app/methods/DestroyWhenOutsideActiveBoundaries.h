#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>

namespace app::classes::DestroyWhenOutsideActiveBoundaries {
    IL2CPP_REGISTER_METHOD(0x00B8DB30, void, FixedUpdate, (app::DestroyWhenOutsideActiveBoundaries * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyWhenOutsideActiveBoundaries * this_ptr))
} // namespace app::classes::DestroyWhenOutsideActiveBoundaries
