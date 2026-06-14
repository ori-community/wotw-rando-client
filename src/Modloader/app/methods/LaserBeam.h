#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserBeam.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LaserBeam {
    IL2CPP_REGISTER_METHOD(
        0x00F06300,
        void,
        SurfaceEffectsPrefabInstantiation,
        app::LaserBeam* this_ptr,
        app::List_1_DynamicInstantiationDescriptor_* instantiations
    )
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_InvalidateParentTimelineCache, app::LaserBeam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_InvalidateParentTimelineCache, app::LaserBeam* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F06860, void, Awake, app::LaserBeam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F06A80, app::GameObject*, GetTimelineScaleTarget, app::LaserBeam* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00F06C40, int32_t, GetPrewarmAmount, app::LaserBeam* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x00F06D50, void, ctor, app::LaserBeam* this_ptr)
} // namespace app::classes::LaserBeam
