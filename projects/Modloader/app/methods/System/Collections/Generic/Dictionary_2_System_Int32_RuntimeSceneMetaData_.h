#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RuntimeSceneMetaData_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_RuntimeSceneMetaData_ * this_ptr, int32_t key, app::RuntimeSceneMetaData** value))
    IL2CPP_REGISTER_METHODINFO(0x04777490, Dictionary_2_System_Int32_RuntimeSceneMetaData__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::RuntimeSceneMetaData*, get_Item, (app::Dictionary_2_System_Int32_RuntimeSceneMetaData_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04746CD8, Dictionary_2_System_Int32_RuntimeSceneMetaData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_RuntimeSceneMetaData_ * this_ptr, int32_t key, app::RuntimeSceneMetaData* value))
    IL2CPP_REGISTER_METHODINFO(0x04786378, Dictionary_2_System_Int32_RuntimeSceneMetaData__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_RuntimeSceneMetaData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AAF0, Dictionary_2_System_Int32_RuntimeSceneMetaData___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RuntimeSceneMetaData_
