#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Projectile___Boxed.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Projectile_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::Projectile*, get_Current, (app::List_1_T_Enumerator_Projectile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, (app::List_1_T_Enumerator_Projectile___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_Projectile___Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Projectile_
