#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_KeyValuePair_2_System_Guid_System_Int32_.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__6.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_KeyValuePair_2_System_Guid_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_KeyValuePair_2_System_Guid_System_Int32_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0282CD00, app::Comparer_1_KeyValuePair_2_System_Guid_System_Int32_*, Create, (app::Comparison_1_System_Collections_Generic_KeyValuePair_2__6 * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0477BBE8, Comparer_1_KeyValuePair_2_System_Guid_System_Int32__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0282CF00, app::Comparer_1_KeyValuePair_2_System_Guid_System_Int32_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02819350, int32_t, IComparer_Compare, (app::Comparer_1_KeyValuePair_2_System_Guid_System_Int32_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_KeyValuePair_2_System_Guid_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_KeyValuePair_2_System_Guid_System_Int32__
