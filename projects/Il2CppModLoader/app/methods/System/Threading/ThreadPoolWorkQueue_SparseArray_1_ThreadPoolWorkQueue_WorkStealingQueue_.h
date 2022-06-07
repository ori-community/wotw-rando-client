#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ {
    IL2CPP_REGISTER_METHOD(0x02775660, app::ThreadPoolWorkQueue_WorkStealingQueue__Array *, get_Current, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763F90, ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A61DB0, void, ctor, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, int32_t initial_size))
    IL2CPP_REGISTER_METHODINFO(0x047926B0, ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A61E20, int32_t, Add, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, app::ThreadPoolWorkQueue_WorkStealingQueue * e))
    IL2CPP_REGISTER_METHODINFO(0x0477D868, ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A620A0, void, Remove, (app::ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * this_ptr, app::ThreadPoolWorkQueue_WorkStealingQueue * e))
    IL2CPP_REGISTER_METHODINFO(0x04733AD8, ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue__Remove__MethodInfo)
}
