#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(
        0x0014E010,
        void,
        ctor,
        app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr,
        app::List_1_SeinSpiritSpearSpell_FlyingSpear_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E060, bool, MoveNext, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E160, bool, MoveNextRare, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014E1C0,
        app::SeinSpiritSpearSpell_FlyingSpear,
        get_Current,
        app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014E1F0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014E2D0, void, IEnumerator_Reset, app::List_1_T_Enumerator_SeinSpiritSpearSpell_FlyingSpear___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SeinSpiritSpearSpell_FlyingSpear_
