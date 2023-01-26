#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IgnitableSpiritTorch_.h>
#include <Modloader/app/structs/IgnitableSpiritTorch.h>
#include <Modloader/app/structs/List_1_T_Enumerator_IgnitableSpiritTorch_.h>

namespace app::classes::System::Collections::Generic::List_1_IgnitableSpiritTorch_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IgnitableSpiritTorch_ * this_ptr, app::IgnitableSpiritTorch* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_IgnitableSpiritTorch_ * this_ptr, app::IgnitableSpiritTorch* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IgnitableSpiritTorch_, GetEnumerator, (app::List_1_IgnitableSpiritTorch_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IgnitableSpiritTorch_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_IgnitableSpiritTorch_
