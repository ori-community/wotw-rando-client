#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectDat_.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::LeakedSceneObjectDetector_ObjectData*, get_Item, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr, int32_t key, app::LeakedSceneObjectDetector_ObjectData* value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData_*, get_Values, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_
