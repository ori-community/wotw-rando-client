#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_MessageDescriptor_.h>
#include <Modloader/app/structs/Comparison_1_MessageDescriptor_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_MessageDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_MessageDescriptor_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0280B3C0, app::Comparer_1_MessageDescriptor_*, Create, (app::Comparison_1_MessageDescriptor_ * comparison))
    IL2CPP_REGISTER_METHOD(0x0280B5C0, app::Comparer_1_MessageDescriptor_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0280A070, int32_t, IComparer_Compare, (app::Comparer_1_MessageDescriptor_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_MessageDescriptor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_MessageDescriptor_
