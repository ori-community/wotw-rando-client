#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::CancellationToken {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CancellationToken, get_None, ())
    IL2CPP_REGISTER_METHOD(0x00206AE0, bool, get_IsCancellationRequested, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206B00, bool, get_CanBeCanceled, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::CancellationToken__Boxed * this_ptr, app::CancellationTokenSource* source))
    IL2CPP_REGISTER_METHOD(0x027D87E0, void, ActionToActionObjShunt, (app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x04713A58, CancellationToken_ActionToActionObjShunt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00206B20, app::CancellationTokenRegistration, Register_1, (app::CancellationToken__Boxed * this_ptr, app::Action* callback))
    IL2CPP_REGISTER_METHODINFO(0x0476BC18, CancellationToken_Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00206B50, app::CancellationTokenRegistration, InternalRegisterWithoutEC, (app::CancellationToken__Boxed * this_ptr, app::Action_1_Object_* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x00206B90, app::CancellationTokenRegistration, Register_2, (app::CancellationToken__Boxed * this_ptr, app::Action_1_Object_* callback, app::Object* state, bool use_synchronization_context, bool use_execution_context))
    IL2CPP_REGISTER_METHODINFO(0x04775428, CancellationToken_Register_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00206BE0, bool, Equals_1, (app::CancellationToken__Boxed * this_ptr, app::CancellationToken other))
    IL2CPP_REGISTER_METHOD(0x00206BF0, bool, Equals_2, (app::CancellationToken__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00206C00, int32_t, GetHashCode, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D8D80, bool, op_Equality, (app::CancellationToken left, app::CancellationToken right))
    IL2CPP_REGISTER_METHOD(0x027D8DA0, bool, op_Inequality, (app::CancellationToken left, app::CancellationToken right))
    IL2CPP_REGISTER_METHOD(0x00206CE0, void, ThrowIfCancellationRequested, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206D10, void, ThrowIfSourceDisposed, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206D20, void, ThrowOperationCanceledException, (app::CancellationToken__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716A40, CancellationToken_ThrowOperationCanceledException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D8EE0, void, ThrowObjectDisposedException, ())
    IL2CPP_REGISTER_METHODINFO(0x04739F68, CancellationToken_ThrowObjectDisposedException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027D8F50, void, cctor, ())
    inline bool operator==(app::CancellationToken left, app::CancellationToken right) {
        return op_Equality(left, right);
    }
    inline bool operator!=(app::CancellationToken left, app::CancellationToken right) {
        return op_Inequality(left, right);
    }
} // namespace app::classes::System::Threading::CancellationToken
