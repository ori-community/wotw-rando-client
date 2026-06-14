#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RuntimeSceneMetaData_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_RuntimeSceneMetaData_* this_ptr,
        int32_t key,
        app::RuntimeSceneMetaData** value
    )
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::RuntimeSceneMetaData*, get_Item, app::Dictionary_2_System_Int32_RuntimeSceneMetaData_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_RuntimeSceneMetaData_* this_ptr,
        int32_t key,
        app::RuntimeSceneMetaData* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_RuntimeSceneMetaData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_RuntimeSceneMetaData_
