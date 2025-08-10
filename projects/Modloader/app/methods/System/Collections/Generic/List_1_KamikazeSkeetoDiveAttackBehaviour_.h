#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_KamikazeSkeetoDiveAttackBehaviour_.h>
#include <Modloader/app/structs/List_1_KamikazeSkeetoDiveAttackBehaviour_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_KamikazeSkeetoDiveAttackBehaviour_.h>

namespace app::classes::System::Collections::Generic::List_1_KamikazeSkeetoDiveAttackBehaviour_ {
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_KamikazeSkeetoDiveAttackBehaviour_* this_ptr,
        app::IEnumerable_1_KamikazeSkeetoDiveAttackBehaviour_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_KamikazeSkeetoDiveAttackBehaviour_,
        GetEnumerator,
        app::List_1_KamikazeSkeetoDiveAttackBehaviour_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_KamikazeSkeetoDiveAttackBehaviour_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_KamikazeSkeetoDiveAttackBehaviour_
