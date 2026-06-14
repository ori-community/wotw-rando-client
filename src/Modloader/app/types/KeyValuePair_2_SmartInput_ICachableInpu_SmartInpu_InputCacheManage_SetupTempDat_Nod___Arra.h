#pragma once
#include <Modloader/app/structs/KeyValuePair_2_SmartInpu_ICachableInpu_SmartInpu_InputCacheManag_SetupTempDa_No___Arr__Cla.h>
#include <Modloader/app/structs/KeyValuePair_2_SmartInput_ICachableInpu_SmartInpu_InputCacheManage_SetupTempDat_Nod___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array {
        inline app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class** type_info() {
            static app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[SmartInput.ICachableInput,SmartInput.InputCacheManager+SetupTempData+Node][]");
        }
        inline app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array>(get_class());
        }
    } // namespace KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array
} // namespace app::classes::types
