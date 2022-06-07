#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::LazyInitializer {
    IL2CPP_REGISTER_METHOD(0x0157AA30, app::Object *, EnsureInitialized_1, (app::Object * * target, app::Func_1_Object_ * value_factory))
    IL2CPP_REGISTER_METHOD(0x0157AA60, app::Object *, EnsureInitializedCore, (app::Object * * target, app::Func_1_Object_ * value_factory))
    IL2CPP_REGISTER_METHODINFO(0x04755080, LazyInitializer_EnsureInitializedCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157AA30, app::SemaphoreSlim *, EnsureInitialized_2, (app::SemaphoreSlim * * target, app::Func_1_System_Threading_SemaphoreSlim_ * value_factory))
    IL2CPP_REGISTER_METHODINFO(0x04780648, LazyInitializer_EnsureInitialized_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157AA30, app::ManualResetEvent *, EnsureInitialized_3, (app::ManualResetEvent * * target, app::Func_1_System_Threading_ManualResetEvent_ * value_factory))
    IL2CPP_REGISTER_METHODINFO(0x047657C8, LazyInitializer_EnsureInitialized_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157AA30, app::Task_ContingentProperties *, EnsureInitialized_4, (app::Task_ContingentProperties * * target, app::Func_1_System_Threading_Tasks_Task_ContingentProperties_ * value_factory))
    IL2CPP_REGISTER_METHODINFO(0x04779198, LazyInitializer_EnsureInitialized_3__MethodInfo)
}
