#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IList_1_KuState_.h>
#include <Modloader/app/structs/KuState.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_KuState_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_System_Int32_KuState_ {
    IL2CPP_REGISTER_METHOD(0x02CAE6C0, void, Add, app::SortedList_2_System_Int32_KuState_* this_ptr, int32_t key, app::KuState* value)
    IL2CPP_REGISTER_METHOD(0x02CAEF10, app::IList_1_KuState_*, get_Values, app::SortedList_2_System_Int32_KuState_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB0620, int32_t, IndexOfValue, app::SortedList_2_System_Int32_KuState_* this_ptr, app::KuState* value)
    IL2CPP_REGISTER_METHOD(0x02CB0800, void, RemoveAt, app::SortedList_2_System_Int32_KuState_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CAE5F0, void, ctor, app::SortedList_2_System_Int32_KuState_* this_ptr)
} // namespace app::classes::System::Collections::Generic::SortedList_2_System_Int32_KuState_
