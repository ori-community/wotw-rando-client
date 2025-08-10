#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataCommonEventSource.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/MappingType__Enum.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#include <Modloader/app/structs/XmlWriteMode__Enum.h>

namespace app::classes::System::Data::DataCommonEventSource {
    IL2CPP_REGISTER_METHOD(0x0239ECF0, void, Trace_1, app::DataCommonEventSource* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0239ED00, int64_t, EnterScope_1, app::DataCommonEventSource* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0239EE20, void, ExitScope, app::DataCommonEventSource* this_ptr, int64_t scope_id)
    IL2CPP_REGISTER_METHOD(0x0239EE30, void, ctor, app::DataCommonEventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0239EED0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01AEE8F0, void, Trace_2, app::DataCommonEventSource* this_ptr, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x01AEE7A0, void, Trace_3, app::DataCommonEventSource* this_ptr, app::String* format, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(
        0x01AEE640,
        void,
        Trace_4,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEE3C0,
        void,
        Trace_5,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEE0F0,
        void,
        Trace_6,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3,
        app::Object* arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEDD70,
        void,
        Trace_7,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3,
        app::Object* arg4,
        app::Object* arg5,
        app::Object* arg6
    )
    IL2CPP_REGISTER_METHOD(0x0153B670, int64_t, EnterScope_2, app::DataCommonEventSource* this_ptr, app::String* format, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(0x0153B530, int64_t, EnterScope_3, app::DataCommonEventSource* this_ptr, app::String* format, app::Object* arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(
        0x0153B3E0,
        int64_t,
        EnterScope_4,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x0153B160,
        int64_t,
        EnterScope_5,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3,
        app::Object* arg4
    )
    IL2CPP_REGISTER_METHOD(0x01AEE8F0, void, Trace_8, app::DataCommonEventSource* this_ptr, app::String* format, app::Exception* arg0)
    IL2CPP_REGISTER_METHOD(
        0x01AED610,
        void,
        Trace_9,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::String* arg1,
        app::String* arg2,
        app::MappingType__Enum arg3
    )
    IL2CPP_REGISTER_METHOD(0x01539EC0, int64_t, EnterScope_6, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1, bool arg2)
    IL2CPP_REGISTER_METHOD(0x01AEBC30, void, Trace_10, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, bool arg1)
    IL2CPP_REGISTER_METHOD(0x01AECF10, void, Trace_11, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, int64_t arg1)
    IL2CPP_REGISTER_METHOD(0x0153AE70, int64_t, EnterScope_7, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1, app::String* arg2)
    IL2CPP_REGISTER_METHOD(0x01AEDA80, void, Trace_12, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, app::String* arg1)
    IL2CPP_REGISTER_METHOD(0x01AEDC00, void, Trace_13, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0)
    IL2CPP_REGISTER_METHOD(0x0153A760, int64_t, EnterScope_8, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1, int32_t arg2)
    IL2CPP_REGISTER_METHOD(0x01AECD60, void, Trace_14, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, app::MappingType__Enum arg1)
    IL2CPP_REGISTER_METHOD(
        0x01AED0C0,
        void,
        Trace_15,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::String* arg1,
        int32_t arg2,
        int32_t arg3,
        bool arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x0153ACB0,
        int64_t,
        EnterScope_9,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::String* arg2,
        bool arg3
    )
    IL2CPP_REGISTER_METHOD(0x01AECBB0, void, Trace_16, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, int32_t arg1)
    IL2CPP_REGISTER_METHOD(0x0153AFF0, int64_t, EnterScope_10, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1)
    IL2CPP_REGISTER_METHOD(
        0x0153A5A0,
        int64_t,
        EnterScope_11,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        int32_t arg2,
        app::String* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x0153AB00,
        int64_t,
        EnterScope_12,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::SchemaFormat__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x0153AB00,
        int64_t,
        EnterScope_13,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::XmlReadMode__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x0153A910,
        int64_t,
        EnterScope_14,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::XmlReadMode__Enum arg2,
        bool arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x0153AB00,
        int64_t,
        EnterScope_15,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::XmlWriteMode__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x0153A070,
        int64_t,
        EnterScope_16,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        int32_t arg2,
        bool arg3,
        app::MissingSchemaAction__Enum arg4
    )
    IL2CPP_REGISTER_METHOD(0x0153A3B0, int64_t, EnterScope_17, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1, int32_t arg2, bool arg3)
    IL2CPP_REGISTER_METHOD(
        0x01AED8F0,
        void,
        Trace_17,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::String* arg1,
        app::String* arg2
    )
    IL2CPP_REGISTER_METHOD(0x01AEBDE0, void, Trace_18, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, int32_t arg1, bool arg2)
    IL2CPP_REGISTER_METHOD(
        0x01AECD60,
        void,
        Trace_19,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::DataViewRowState__Enum arg1
    )
    IL2CPP_REGISTER_METHOD(0x01AECD60, void, Trace_20, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, app::ListChangedType__Enum arg1)
    IL2CPP_REGISTER_METHOD(
        0x01AED450,
        void,
        Trace_21,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::String* arg1,
        app::DataViewRowState__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEC9C0,
        void,
        Trace_22,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::DataViewRowState__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(0x01AEBFD0, void, Trace_23, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, int32_t arg1, int32_t arg2)
    IL2CPP_REGISTER_METHOD(
        0x01AEC680,
        void,
        Trace_24,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::DataViewRowState__Enum arg2,
        app::DataViewRowState__Enum arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEC1C0,
        void,
        Trace_25,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::DataViewRowState__Enum arg2,
        app::DataViewRowState__Enum arg3,
        int32_t arg4,
        app::DataViewRowState__Enum arg5,
        app::DataViewRowState__Enum arg6
    )
    IL2CPP_REGISTER_METHOD(
        0x0153A070,
        int64_t,
        EnterScope_18,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        int32_t arg2,
        bool arg3,
        app::Int32Enum__Enum arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x0153A5A0,
        int64_t,
        EnterScope_19,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        int32_t arg2,
        app::Object* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x0153A910,
        int64_t,
        EnterScope_20,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::Int32Enum__Enum arg2,
        bool arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x0153AB00,
        int64_t,
        EnterScope_21,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::Int32Enum__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x0153ACB0,
        int64_t,
        EnterScope_22,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg1,
        app::Object* arg2,
        bool arg3
    )
    IL2CPP_REGISTER_METHOD(0x0153AE70, int64_t, EnterScope_23, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(
        0x01AEC1C0,
        void,
        Trace_26,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::Int32Enum__Enum arg2,
        app::Int32Enum__Enum arg3,
        int32_t arg4,
        app::Int32Enum__Enum arg5,
        app::Int32Enum__Enum arg6
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEC680,
        void,
        Trace_27,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::Int32Enum__Enum arg2,
        app::Int32Enum__Enum arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEC9C0,
        void,
        Trace_28,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        int32_t arg1,
        app::Int32Enum__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(0x01AECD60, void, Trace_29, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, app::Int32Enum__Enum arg1)
    IL2CPP_REGISTER_METHOD(
        0x01AED0C0,
        void,
        Trace_30,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::Object* arg1,
        int32_t arg2,
        int32_t arg3,
        bool arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x01AED450,
        void,
        Trace_31,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::Object* arg1,
        app::Int32Enum__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x01AED610,
        void,
        Trace_32,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Int32Enum__Enum arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x01AED8F0,
        void,
        Trace_33,
        app::DataCommonEventSource* this_ptr,
        app::String* format,
        int32_t arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(0x01AEDA80, void, Trace_34, app::DataCommonEventSource* this_ptr, app::String* format, int32_t arg0, app::Object* arg1)
} // namespace app::classes::System::Data::DataCommonEventSource
