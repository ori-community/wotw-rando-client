#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_Moon_UberStateController_ApplierContext_.h>
#include <Modloader/app/structs/Comparison_1_Moon_UberStateController_ApplierContext_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_UberStateController_ApplierContext_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_UberStateController_ApplierContext_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0281AE90, app::Comparer_1_Moon_UberStateController_ApplierContext_*, Create, (app::Comparison_1_Moon_UberStateController_ApplierContext_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04711340, Comparer_1_Moon_UberStateController_ApplierContext__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0281B090, app::Comparer_1_Moon_UberStateController_ApplierContext_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_Moon_UberStateController_ApplierContext_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_Moon_UberStateController_ApplierContext_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_UberStateController_ApplierContext_
