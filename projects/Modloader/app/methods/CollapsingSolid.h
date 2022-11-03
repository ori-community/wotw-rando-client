#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CollapsingSolid {
    IL2CPP_REGISTER_METHOD(0x012CB9D0, void, OnCollisionEnter, (app::CollapsingSolid * this_ptr, app::Collision* other))
    IL2CPP_REGISTER_METHOD(0x012CBAC0, void, Serialize, (app::CollapsingSolid * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CollapsingSolid * this_ptr))
} // namespace app::classes::CollapsingSolid
