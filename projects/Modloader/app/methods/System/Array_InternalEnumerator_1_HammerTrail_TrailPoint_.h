#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/HammerTrail_TrailPoint.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_HammerTrail_TrailPoint_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00162040, app::HammerTrail_TrailPoint, get_Current, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00162070, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_HammerTrail_TrailPoint___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_HammerTrail_TrailPoint_
