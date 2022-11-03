#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskCache {
    IL2CPP_REGISTER_METHOD(0x01A91550, app::Task_1_System_Int32___Array*, CreateInt32Tasks, ())
    IL2CPP_REGISTER_METHOD(0x01A91760, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01542F20, app::Task_1_System_Object_*, CreateCacheableTask_1, (app::Object * result))
    IL2CPP_REGISTER_METHOD(0x01542CE0, app::Task_1_System_Int32_*, CreateCacheableTask_2, (int32_t result))
    IL2CPP_REGISTER_METHODINFO(0x0476A128, AsyncTaskCache_CreateCacheableTask_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542BC0, app::Task_1_System_Boolean_*, CreateCacheableTask_3, (bool result))
    IL2CPP_REGISTER_METHODINFO(0x04787980, AsyncTaskCache_CreateCacheableTask_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01542E00, app::Task_1_System_Nullable_1_*, CreateCacheableTask_4, (app::Nullable_1_Int32_ result))
    IL2CPP_REGISTER_METHOD(0x01543040, app::Task_1_VoidTaskResult_*, CreateCacheableTask_5, (app::VoidTaskResult result))
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskCache
