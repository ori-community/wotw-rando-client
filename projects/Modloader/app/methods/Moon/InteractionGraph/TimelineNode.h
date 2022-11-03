#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::TimelineNode {
    IL2CPP_REGISTER_METHOD(0x01993A90, app::List_1_Moon_Timeline_MoonTimeline_*, get_ResolvedTimelines, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01993D10, app::MoonTimeline*, get_CurrentTimeline, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B35B90, void, RefreshResolvedTimelines, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01993DE0, void, OnEnter, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019941B0, void, UpdateState, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019942F0, void, OnExit, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB620, void, Interrupt, (app::TimelineNode * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754D98, TimelineNode_Interrupt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, (app::TimelineNode * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::TimelineNode
