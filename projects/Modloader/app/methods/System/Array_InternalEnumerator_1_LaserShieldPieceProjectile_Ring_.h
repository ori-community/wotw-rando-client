#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00162800, app::LaserShieldPieceProjectile_Ring, get_Current, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00162980, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_LaserShieldPieceProjectile_Ring_
