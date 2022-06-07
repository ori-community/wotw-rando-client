#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ {
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472AFA0, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x047745C0, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser__TrySetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_Microsoft_Xbox_Services_Xal_XalUser_ *, get_Task, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D600, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr, app::XalUser_1 * result))
    IL2CPP_REGISTER_METHODINFO(0x04721AB0, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser__TrySetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x04707D20, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, (app::TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755128, TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser__SetCanceled__MethodInfo)
}
