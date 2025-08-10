#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed.h>
#include <Modloader/app/structs/Reaction.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x001ED740, app::Reaction, get_Current, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED730, bool, MoveNext, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED710, void, Dispose, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED6D0, void, ctor, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr, app::Queue_1_Moon_Timeline_Reaction_* q)
    IL2CPP_REGISTER_METHOD(0x001ED790, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED7A0, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001ED860, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_Moon_Timeline_Reaction___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_Moon_Timeline_Reaction_
