#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivityFilter_GetFilterAsTuple_d_7.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Tuple_2_Int32_Int32_.h>

namespace app::classes::System::Diagnostics::Tracing::ActivityFilter__GetFilterAsTuple_d__7 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01744EB0, bool, MoveNext, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Tuple_2_Int32_Int32_*, IEnumerator_Tuple_int__int___get_Current, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01745100, void, IEnumerator_Reset, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01745150, app::IEnumerator_1_System_Tuple_2__1*, IEnumerable_Tuple_int__int___GetEnumerator, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01745350, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ActivityFilter_GetFilterAsTuple_d_7 * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::ActivityFilter__GetFilterAsTuple_d__7
