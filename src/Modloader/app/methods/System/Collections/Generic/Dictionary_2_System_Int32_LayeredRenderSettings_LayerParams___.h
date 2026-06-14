#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams___ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_* this_ptr,
        int32_t key,
        app::LayeredRenderSettings_LayerParams__Array** value
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_* this_ptr,
        int32_t key,
        app::LayeredRenderSettings_LayerParams__Array* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_LayeredRenderSettings_LayerParams___
