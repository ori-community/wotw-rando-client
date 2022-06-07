#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolver_IterationDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IKSolver_IterationDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::IKSolver_IterationDelegate * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02BE6ED0, app::IAsyncResult *, BeginInvoke, (app::IKSolver_IterationDelegate * this_ptr, int32_t i, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IKSolver_IterationDelegate * this_ptr, app::IAsyncResult * result))
}
