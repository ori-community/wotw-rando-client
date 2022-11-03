#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CapsuleShapeCopier {
    IL2CPP_REGISTER_METHOD(0x00B25030, void, Awake, (app::CapsuleShapeCopier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B250C0, void, FixedUpdate, (app::CapsuleShapeCopier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B25690, void, ctor, (app::CapsuleShapeCopier * this_ptr))
} // namespace app::classes::CapsuleShapeCopier
