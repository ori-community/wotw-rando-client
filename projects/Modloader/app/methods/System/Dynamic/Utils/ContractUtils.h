#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/ICollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_CatchBlock_.h>
#include <Modloader/app/structs/IList_1_KeyValuePair_2_System_Object_System_Object_.h>

namespace app::classes::System::Dynamic::Utils::ContractUtils {
    IL2CPP_REGISTER_METHOD(0x01F93C70, app::Exception*, get_Unreachable, ())
    IL2CPP_REGISTER_METHOD(0x01F93DC0, void, Requires, (bool precondition, app::String* param_name))
    IL2CPP_REGISTER_METHODINFO(0x04719FD8, ContractUtils_Requires__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F93E60, void, RequiresNotNull_1, (app::Object * value, app::String* param_name))
    IL2CPP_REGISTER_METHODINFO(0x04715AE0, ContractUtils_RequiresNotNull__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F93F20, void, RequiresNotNull_2, (app::Object * value, app::String* param_name, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04711618, ContractUtils_RequiresNotNull_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F93FF0, app::String*, GetParamName, (app::String * param_name, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01AEF300, void, RequiresNotEmpty_1, (app::ICollection_1_System_Object_ * collection, app::String* param_name))
    IL2CPP_REGISTER_METHODINFO(0x04714548, ContractUtils_RequiresNotEmpty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_1, (app::IList_1_System_Object_ * array, app::String* array_name))
    IL2CPP_REGISTER_METHODINFO(0x0478AB70, ContractUtils_RequiresNotNullItems__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF1B0, void, RequiresArrayRange_1, (app::IList_1_System_Object_ * array, int32_t offset, int32_t count, app::String* offset_name, app::String* count_name))
    IL2CPP_REGISTER_METHODINFO(0x047257D8, ContractUtils_RequiresArrayRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF060, void, RequiresArrayRange_2, (app::IList_1_KeyValuePair_2_System_String_System_Object_ * array, int32_t offset, int32_t count, app::String* offset_name, app::String* count_name))
    IL2CPP_REGISTER_METHODINFO(0x047464F8, ContractUtils_RequiresArrayRange_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF1B0, void, RequiresArrayRange_3, (app::IList_1_System_String_ * array, int32_t offset, int32_t count, app::String* offset_name, app::String* count_name))
    IL2CPP_REGISTER_METHODINFO(0x047125A0, ContractUtils_RequiresArrayRange_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF300, void, RequiresNotEmpty_2, (app::ICollection_1_System_Linq_Expressions_Expression_ * collection, app::String* param_name))
    IL2CPP_REGISTER_METHODINFO(0x0472E1C0, ContractUtils_RequiresNotEmpty_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_2, (app::IList_1_System_Linq_Expressions_SwitchCase_ * array, app::String* array_name))
    IL2CPP_REGISTER_METHODINFO(0x04740768, ContractUtils_RequiresNotNullItems_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF3F0, void, RequiresNotNullItems_3, (app::IList_1_System_Linq_Expressions_CatchBlock_ * array, app::String* array_name))
    IL2CPP_REGISTER_METHODINFO(0x0472AA78, ContractUtils_RequiresNotNullItems_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01AEF060, void, RequiresArrayRange_4, (app::IList_1_KeyValuePair_2_System_Object_System_Object_ * array, int32_t offset, int32_t count, app::String* offset_name, app::String* count_name))
    IL2CPP_REGISTER_METHODINFO(0x04782F98, ContractUtils_RequiresArrayRange_3__MethodInfo)
} // namespace app::classes::System::Dynamic::Utils::ContractUtils
