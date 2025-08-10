#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonType_1_ITestInterface_.h>
#include <Modloader/app/structs/IMoonType_1_System_Int32_.h>
#include <Modloader/app/structs/IMoonType_1_System_Object_.h>
#include <Modloader/app/structs/IMoonType_1_System_String_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ITestInterface.h>
#include <Modloader/app/structs/List_1_Moon_MoonInt_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__17.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReferenceTester.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ReferenceTester {
    IL2CPP_REGISTER_METHOD(0x02F9C010, void, Start, app::ReferenceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F9C0E0, void, Update, app::ReferenceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F9C1E0, void, OnGUI, app::ReferenceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F9C760, app::String*, GetGUITextForMoonIntListTestValues, app::ReferenceTester* this_ptr, app::List_1_Moon_MoonInt_* list)
    IL2CPP_REGISTER_METHOD(0x02F9C900, void, LogValues, app::ReferenceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F9CC80, void, UpdatePerfValues, app::ReferenceTester* this_ptr, int32_t iteration_count)
    IL2CPP_REGISTER_METHOD(0x02F9D070, void, ctor, app::ReferenceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01540100,
        app::String*,
        GetGUITextForTestValues_1,
        app::ReferenceTester* this_ptr,
        app::Object* normal_value,
        app::IMoonType_1_System_Object_* static_value,
        app::IMoonType_1_System_Object_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x0153FB50,
        app::String*,
        GetGUITextForMoonReferenceListTestValues_1,
        app::ReferenceTester* this_ptr,
        app::List_1_Moon_MoonReference_1__17* list
    )
    IL2CPP_REGISTER_METHOD(
        0x01540E60,
        app::String*,
        TimeTestValues_1,
        app::ReferenceTester* this_ptr,
        app::Object* normal_value,
        app::IMoonType_1_System_Object_* static_value,
        app::IMoonType_1_System_Object_* dynamic_data_value,
        app::Stopwatch* stop_watch,
        int32_t iteration_count
    )
    IL2CPP_REGISTER_METHOD(
        0x0153FD70,
        app::String*,
        GetGUITextForTestValues_2,
        app::ReferenceTester* this_ptr,
        int32_t normal_value,
        app::IMoonType_1_System_Int32_* static_value,
        app::IMoonType_1_System_Int32_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01540100,
        app::String*,
        GetGUITextForTestValues_3,
        app::ReferenceTester* this_ptr,
        app::String* normal_value,
        app::IMoonType_1_System_String_* static_value,
        app::IMoonType_1_System_String_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x015404C0,
        app::String*,
        GetGUITextForTestValues_4,
        app::ReferenceTester* this_ptr,
        app::Vector3 normal_value,
        app::IMoonType_1_UnityEngine_Vector3_* static_value,
        app::IMoonType_1_UnityEngine_Vector3_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01540100,
        app::String*,
        GetGUITextForTestValues_5,
        app::ReferenceTester* this_ptr,
        app::GameObject* normal_value,
        app::IMoonType_1_UnityEngine_GameObject_* static_value,
        app::IMoonType_1_UnityEngine_GameObject_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01540100,
        app::String*,
        GetGUITextForTestValues_6,
        app::ReferenceTester* this_ptr,
        app::ITestInterface* normal_value,
        app::IMoonType_1_ITestInterface_* static_value,
        app::IMoonType_1_ITestInterface_* dynamic_data_value
    )
    IL2CPP_REGISTER_METHOD(
        0x0153FB50,
        app::String*,
        GetGUITextForMoonReferenceListTestValues_2,
        app::ReferenceTester* this_ptr,
        app::List_1_Moon_MoonReference_1_* list
    )
    IL2CPP_REGISTER_METHOD(
        0x01540850,
        app::String*,
        TimeTestValues_2,
        app::ReferenceTester* this_ptr,
        int32_t normal_value,
        app::IMoonType_1_System_Int32_* static_value,
        app::IMoonType_1_System_Int32_* dynamic_data_value,
        app::Stopwatch* stop_watch,
        int32_t iteration_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01540E60,
        app::String*,
        TimeTestValues_3,
        app::ReferenceTester* this_ptr,
        app::String* normal_value,
        app::IMoonType_1_System_String_* static_value,
        app::IMoonType_1_System_String_* dynamic_data_value,
        app::Stopwatch* stop_watch,
        int32_t iteration_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01541430,
        app::String*,
        TimeTestValues_4,
        app::ReferenceTester* this_ptr,
        app::Vector3 normal_value,
        app::IMoonType_1_UnityEngine_Vector3_* static_value,
        app::IMoonType_1_UnityEngine_Vector3_* dynamic_data_value,
        app::Stopwatch* stop_watch,
        int32_t iteration_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01540E60,
        app::String*,
        TimeTestValues_5,
        app::ReferenceTester* this_ptr,
        app::GameObject* normal_value,
        app::IMoonType_1_UnityEngine_GameObject_* static_value,
        app::IMoonType_1_UnityEngine_GameObject_* dynamic_data_value,
        app::Stopwatch* stop_watch,
        int32_t iteration_count
    )
} // namespace app::classes::ReferenceTester
