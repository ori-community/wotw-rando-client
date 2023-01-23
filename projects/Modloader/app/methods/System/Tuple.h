#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tuple_2_Object_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Tuple_3_Object_Object_Object_.h>
#include <Modloader/app/structs/Tuple_2_Guid_Int32_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Tuple_2_Int32_Int32_.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_.h>
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#include <Modloader/app/structs/Tuple_2_System_IO_Stream_System_IO_Stream_ReadWriteTask_.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#include <Modloader/app/structs/Tuple_2_String_Byte_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Tuple_3_Single_SceneFPSTest_State_Boolean_.h>
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#include <Modloader/app/structs/Tuple_3_Single_Int32Enum_Boolean_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>

namespace app::classes::System::Tuple {
    IL2CPP_REGISTER_METHOD(0x022916C0, int32_t, CombineHashCodes_1, (int32_t h1, int32_t h2))
    IL2CPP_REGISTER_METHOD(0x027BB430, int32_t, CombineHashCodes_2, (int32_t h1, int32_t h2, int32_t h3))
    IL2CPP_REGISTER_METHOD(0x027BB440, int32_t, CombineHashCodes_3, (int32_t h1, int32_t h2, int32_t h3, int32_t h4))
    IL2CPP_REGISTER_METHOD(0x015465C0, app::Tuple_2_Object_Object_*, Create_1, (app::Object * item1, app::Object* item2))
    IL2CPP_REGISTER_METHOD(0x015466E0, app::Tuple_3_Object_Object_Object_*, Create_2, (app::Object * item1, app::Object* item2, app::Object* item3))
    IL2CPP_REGISTER_METHOD(0x01546390, app::Tuple_2_Guid_Int32_*, Create_3, (app::Guid item1, int32_t item2))
    IL2CPP_REGISTER_METHODINFO(0x04753260, Tuple_Create_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015464B0, app::Tuple_2_Int32_Int32_*, Create_4, (int32_t item1, int32_t item2))
    IL2CPP_REGISTER_METHODINFO(0x04781C40, Tuple_Create_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01546270, app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_*, Create_5, (app::EventProvider_SessionInfo item1, bool item2))
    IL2CPP_REGISTER_METHODINFO(0x047704D0, Tuple_Create_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015465C0, app::Tuple_2_System_IO_Stream_System_IO_Stream_ReadWriteTask_*, Create_6, (app::Stream * item1, app::Stream_ReadWriteTask* item2))
    IL2CPP_REGISTER_METHODINFO(0x04758558, Tuple_Create_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015465C0, app::Tuple_2_String_Byte_*, Create_7, (app::String * item1, app::Byte__Array* item2))
    IL2CPP_REGISTER_METHODINFO(0x04751118, Tuple_Create_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01546800, app::Tuple_3_Single_SceneFPSTest_State_Boolean_*, Create_8, (float item1, app::SceneFPSTest_State__Enum item2, bool item3))
    IL2CPP_REGISTER_METHODINFO(0x04720DF8, Tuple_Create_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01546800, app::Tuple_3_Single_Int32Enum_Boolean_*, Create_9, (float item1, app::Int32Enum__Enum item2, bool item3))
} // namespace app::classes::System::Tuple
