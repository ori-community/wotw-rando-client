#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ICollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::Utils::ContractUtils {
    IL2CPP_REGISTER_METHOD(0x01F93C70, app::Exception*, get_Unreachable, )
    IL2CPP_REGISTER_METHOD(0x01F93DC0, void, Requires, bool precondition, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01F93E60, void, RequiresNotNull_1, app::Object* value, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01F93F20, void, RequiresNotNull_2, app::Object* value, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F93FF0, app::String*, GetParamName, app::String* param_name, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01AEF300, void, RequiresNotEmpty_1, app::ICollection_1_System_Object_* collection, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_1, app::IList_1_System_Object_* array, app::String* array_name)
    IL2CPP_REGISTER_METHOD(
        0x01AEF1B0,
        void,
        RequiresArrayRange_1,
        app::IList_1_System_Object_* array,
        int32_t offset,
        int32_t count,
        app::String* offset_name,
        app::String* count_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF060,
        void,
        RequiresArrayRange_2,
        app::IList_1_KeyValuePair_2_System_String_System_Object_* array,
        int32_t offset,
        int32_t count,
        app::String* offset_name,
        app::String* count_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01AEF1B0,
        void,
        RequiresArrayRange_3,
        app::IList_1_System_String_* array,
        int32_t offset,
        int32_t count,
        app::String* offset_name,
        app::String* count_name
    )
    IL2CPP_REGISTER_METHOD(0x01AEF300, void, RequiresNotEmpty_2, app::ICollection_1_System_Linq_Expressions_Expression_* collection, app::String* param_name)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_2, app::IList_1_System_Linq_Expressions_SwitchCase_* array, app::String* array_name)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_3, app::IList_1_System_Linq_Expressions_CatchBlock_* array, app::String* array_name)
    IL2CPP_REGISTER_METHOD(
        0x01AEF060,
        void,
        RequiresArrayRange_4,
        app::IList_1_KeyValuePair_2_System_Object_System_Object_* array,
        int32_t offset,
        int32_t count,
        app::String* offset_name,
        app::String* count_name
    )
} // namespace app::classes::System::Dynamic::Utils::ContractUtils
