#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_FullSerializer_fsData_.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/List_1_T_Enumerator_FullSerializer_fsData_.h>

namespace app::classes::System::Collections::Generic::List_1_FullSerializer_fsData_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_FullSerializer_fsData_ * this_ptr, app::fsData* item))
    IL2CPP_REGISTER_METHODINFO(0x0470C700, List_1_FullSerializer_fsData__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_FullSerializer_fsData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BCB8, List_1_FullSerializer_fsData__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::fsData*, get_Item, (app::List_1_FullSerializer_fsData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047227B8, List_1_FullSerializer_fsData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_FullSerializer_fsData_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04767760, List_1_FullSerializer_fsData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_FullSerializer_fsData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783E78, List_1_FullSerializer_fsData__Reverse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_FullSerializer_fsData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751AB8, List_1_FullSerializer_fsData___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_FullSerializer_fsData_, GetEnumerator, (app::List_1_FullSerializer_fsData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F768, List_1_FullSerializer_fsData__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_FullSerializer_fsData_
