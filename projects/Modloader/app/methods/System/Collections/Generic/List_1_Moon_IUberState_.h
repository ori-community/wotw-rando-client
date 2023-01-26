#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_IUberState_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_IUberState_.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_IUberState_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IUberState_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_IUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IUberState*, get_Item, (app::List_1_Moon_IUberState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_IUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_IUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_IUberState_ * this_ptr, app::IUberState* item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_IUberState_ * this_ptr, app::IEnumerable_1_Moon_IUberState_* collection))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IUberState__Array*, ToArray, (app::List_1_Moon_IUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_Moon_IUberState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_IUberState_, GetEnumerator, (app::List_1_Moon_IUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_IUberState_ * this_ptr, app::IUberState* item))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IUberState_
