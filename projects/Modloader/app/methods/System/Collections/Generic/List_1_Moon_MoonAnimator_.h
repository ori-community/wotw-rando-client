#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/IComparer_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Predicate_1_Moon_MoonAnimator_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_MoonAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_MoonAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::IEnumerable_1_Moon_MoonAnimator_* collection))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonAnimator*, get_Item, (app::List_1_Moon_MoonAnimator_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_MoonAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::MoonAnimator* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::MoonAnimator* item))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::MoonAnimator* item))
    IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::MoonAnimator* item, app::IComparer_1_Moon_MoonAnimator_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_MoonAnimator_ * this_ptr, int32_t index, app::MoonAnimator* item))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_Moon_MoonAnimator_ * this_ptr, app::Predicate_1_Moon_MoonAnimator_* match))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_MoonAnimator_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonAnimator_
