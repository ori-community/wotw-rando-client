#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Byte_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__2.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__3.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__4.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__5.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__6.h>
#include <Modloader/app/structs/Predicate_1_System_Collections_Generic_KeyValuePair_2__7.h>

namespace app::classes::System::Predicate_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, app::Predicate_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_1,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A51100,
        app::IAsyncResult*,
        BeginInvoke_1,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_Object_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_1, app::Predicate_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_2,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_2,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A511D0,
        app::IAsyncResult*,
        BeginInvoke_2,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr,
        app::KeyValuePair_2_System_Int32_System_Object_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_2, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__1* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_3,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_3,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A512A0,
        app::IAsyncResult*,
        BeginInvoke_3,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_3, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__2* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_4,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_4,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A51370,
        app::IAsyncResult*,
        BeginInvoke_4,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr,
        app::KeyValuePair_2_System_Object_System_Byte_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_4, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__3* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_5,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_5,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A51440,
        app::IAsyncResult*,
        BeginInvoke_5,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr,
        app::KeyValuePair_2_System_Object_System_Int32_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_5, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__4* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_6,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_6,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A51510,
        app::IAsyncResult*,
        BeginInvoke_6,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_6, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__5* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_7,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_7,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A515E0,
        app::IAsyncResult*,
        BeginInvoke_7,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr,
        app::KeyValuePair_2_System_Object_System_Single_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_7, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__6* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor_8,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        bool,
        Invoke_8,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02A516B0,
        app::IAsyncResult*,
        BeginInvoke_8,
        app::Predicate_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr,
        app::KeyValuePair_2_System_Object_System_ValueTuple_2_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_8, app::Predicate_1_System_Collections_Generic_KeyValuePair_2__7* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Predicate_1_System_Collections_Generic_KeyValuePair_2_
