#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IAttackable_.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/List_1_T_Enumerator_IAttackable_.h>

namespace app::classes::System::Collections::Generic::List_1_IAttackable_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IAttackable*, get_Item, (app::List_1_IAttackable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_IAttackable_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_IAttackable_ * this_ptr, app::IAttackable* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_IAttackable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IAttackable_, GetEnumerator, (app::List_1_IAttackable_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_IAttackable_
