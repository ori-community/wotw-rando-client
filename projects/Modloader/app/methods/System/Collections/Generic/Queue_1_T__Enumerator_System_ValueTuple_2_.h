#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ValueTuple_2_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_System_ValueTuple_2___Boxed.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x001EE680, app::ValueTuple_2_Int32_UnityEngine_GameObject_, get_Current_1, (app::Queue_1_T_Enumerator_System_ValueTuple_2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE670, bool, MoveNext_1, (app::Queue_1_T_Enumerator_System_ValueTuple_2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose_1, (app::Queue_1_T_Enumerator_System_ValueTuple_2___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001ECB90, void, ctor, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr, app::Queue_1_System_ValueTuple_2__1* q))
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose_2, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE670, bool, MoveNext_2, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE680, app::ValueTuple_2_Int32_Object_, get_Current_2, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE6C0, void, ThrowEnumerationNotStartedOrEnded, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE6D0, app::Object*, IEnumerator_get_Current, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EE780, void, IEnumerator_Reset, (app::Queue_1_T_Enumerator_System_ValueTuple_2__1__Boxed * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_System_ValueTuple_2_
