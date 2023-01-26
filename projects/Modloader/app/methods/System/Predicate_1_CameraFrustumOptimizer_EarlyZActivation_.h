#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_CameraFrustumOptimizer_EarlyZActivation_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_ * this_ptr, app::CameraFrustumOptimizer_EarlyZActivation obj))
    IL2CPP_REGISTER_METHOD(0x0288C560, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_ * this_ptr, app::CameraFrustumOptimizer_EarlyZActivation obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_CameraFrustumOptimizer_EarlyZActivation_
