#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node.h>
#include <Modloader/app/structs/List_1_SmartInput_InputCacheManager_SetupTempData_Node_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node_.h>

namespace app::classes::System::Collections::Generic::List_1_SmartInput_InputCacheManager_SetupTempData_Node_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::InputCacheManager_SetupTempData_Node*,
        get_Item,
        app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FE8D00,
        bool,
        Contains,
        app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr,
        app::InputCacheManager_SetupTempData_Node* item
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr,
        app::InputCacheManager_SetupTempData_Node* item
    )
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node_,
        GetEnumerator,
        app::List_1_SmartInput_InputCacheManager_SetupTempData_Node_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_SmartInput_InputCacheManager_SetupTempData_Node_
