#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComparisonComparer_1_System_Object_.h>
#include <Modloader/app/structs/Comparison_1_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_Object_ * this_ptr, app::Comparison_1_Object_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, (app::ComparisonComparer_1_System_Object_ * this_ptr, app::Object* x, app::Object* y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Object_
