#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_EventSystems_PointerEventDat_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollectio_Syste_Int3_UnityEngin_EventSystem_PointerEventDat_.h>
#include <Modloader/app/structs/PointerEventData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr, int32_t key, app::PointerEventData** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr, int32_t key, app::PointerEventData* value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_*, get_Values, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_EventSystems_PointerEventData_, GetEnumerator, (app::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_
