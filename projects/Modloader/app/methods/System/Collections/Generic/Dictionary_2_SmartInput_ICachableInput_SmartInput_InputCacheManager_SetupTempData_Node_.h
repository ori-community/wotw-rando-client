#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TK_TVal_ValueCollect_SmartIn_ICachableIn_SmartIn_InputCacheMana_SetupTempD_N_.h>
#include <Modloader/app/structs/Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Enumerat_SmartInp_ICachableInp_SmartInp_InputCacheManag_SetupTempD_N_.h>
#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_*, get_Values, (app::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * this_ptr, app::ICachableInput* key, app::InputCacheManager_SetupTempData_Node** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * this_ptr, app::ICachableInput* key, app::InputCacheManager_SetupTempData_Node* value))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_, GetEnumerator, (app::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_
