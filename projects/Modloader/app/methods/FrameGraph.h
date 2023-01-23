#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrameGraph.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::FrameGraph {
    IL2CPP_REGISTER_METHOD(0x0163ED70, void, Awake, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163EE70, void, InitResolution, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163EF90, void, OnEnable, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163F180, void, OnDisable, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163F370, void, OnEndOfFrame, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EA80, FrameGraph_OnEndOfFrame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0163F4B0, void, CreateLineMaterial, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163F650, int32_t, NsOffsetToXCoordinate, (app::FrameGraph * this_ptr, int64_t ns_offset))
    IL2CPP_REGISTER_METHOD(0x0163F740, int32_t, DrawSampleSummary, (app::FrameGraph * this_ptr, int64_t ns_start_offset, int64_t ns_end_offset, float ms_value, app::Color color, int32_t x_start, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0163F8C0, void, DrawSampleBar, (app::FrameGraph * this_ptr, int64_t ns_start_offset, int64_t ns_end_offset, float ms_value, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0163FAF0, void, Update, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0163FB90, void, Draw, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016408A0, void, ctor, (app::FrameGraph * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016408C0, void, cctor, ())
} // namespace app::classes::FrameGraph
