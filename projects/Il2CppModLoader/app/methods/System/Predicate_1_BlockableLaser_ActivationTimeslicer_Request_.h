#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::BlockableLaser_ActivationTimeslicer_Request obj))
    IL2CPP_REGISTER_METHOD(0x0288BFC0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::BlockableLaser_ActivationTimeslicer_Request obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_BlockableLaser_ActivationTimeslicer_Request_
