#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightCanvas_SubLayerSettingGroup.h>
#include <Modloader/app/structs/LightCanvas_c.h>

namespace app::classes::LightCanvas___c {
    IL2CPP_REGISTER_METHOD(0x01143AD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LightCanvas_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01143C10,
        int32_t,
        _MakeBakedLightingLightColorMask_b__89_0,
        app::LightCanvas_c* this_ptr,
        app::LightCanvas_SubLayerSettingGroup* x,
        app::LightCanvas_SubLayerSettingGroup* y
    )
} // namespace app::classes::LightCanvas___c
