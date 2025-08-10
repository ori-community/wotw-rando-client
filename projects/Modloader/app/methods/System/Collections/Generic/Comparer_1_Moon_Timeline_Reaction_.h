#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_Timeline_Reaction_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02814D00, app::Comparer_1_Moon_Timeline_Reaction_*, Create, app::Comparison_1_Moon_Timeline_Reaction_* comparison)
    IL2CPP_REGISTER_METHOD(0x02814F00, app::Comparer_1_Moon_Timeline_Reaction_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x0280A070, int32_t, IComparer_Compare, app::Comparer_1_Moon_Timeline_Reaction_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Moon_Timeline_Reaction_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Timeline_Reaction_
