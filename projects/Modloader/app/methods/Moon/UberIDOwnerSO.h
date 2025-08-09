#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberIDOwnerSO.h>

namespace app::classes::Moon::UberIDOwnerSO {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberID*, get_ID, app::UberIDOwnerSO* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B67210, void, ResetUberID, app::UberIDOwnerSO* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B67350, void, ctor, app::UberIDOwnerSO* this_ptr)
} // namespace app::classes::Moon::UberIDOwnerSO
