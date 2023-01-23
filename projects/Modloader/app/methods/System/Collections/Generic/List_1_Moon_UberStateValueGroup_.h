#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/UberStateValueGroup.h>
#include <Modloader/app/structs/IComparer_1_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/Comparison_1_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_UberStateValueGroup_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_UberStateValueGroup_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CA48, List_1_Moon_UberStateValueGroup___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_UberStateValueGroup_ * this_ptr, app::UberStateValueGroup* item))
    IL2CPP_REGISTER_METHODINFO(0x04798F50, List_1_Moon_UberStateValueGroup__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_1, (app::List_1_Moon_UberStateValueGroup_ * this_ptr, app::IComparer_1_Moon_UberStateValueGroup_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047998F0, List_1_Moon_UberStateValueGroup__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767CB8, List_1_Moon_UberStateValueGroup__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UberStateValueGroup*, get_Item, (app::List_1_Moon_UberStateValueGroup_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04738D68, List_1_Moon_UberStateValueGroup__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798150, List_1_Moon_UberStateValueGroup__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_2, (app::List_1_Moon_UberStateValueGroup_ * this_ptr, app::Comparison_1_Moon_UberStateValueGroup_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x04718F70, List_1_Moon_UberStateValueGroup__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_UberStateValueGroup_, GetEnumerator, (app::List_1_Moon_UberStateValueGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730960, List_1_Moon_UberStateValueGroup__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_UberStateValueGroup_
