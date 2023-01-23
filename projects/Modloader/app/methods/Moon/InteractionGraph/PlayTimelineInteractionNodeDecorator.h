#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayTimelineInteractionNodeDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::PlayTimelineInteractionNodeDecorator {
    IL2CPP_REGISTER_METHOD(0x01990DE0, app::MoonTimeline*, get_ResolvedTimeline, (app::PlayTimelineInteractionNodeDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990EE0, app::MoonTimeline*, get_ResolvedChainedTimeline, (app::PlayTimelineInteractionNodeDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01990FE0, void, OnDecoratedNodeEnter, (app::PlayTimelineInteractionNodeDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01991210, void, OnDecoratedNodeExit, (app::PlayTimelineInteractionNodeDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x019914B0, void, OnTimelineFinished, (app::PlayTimelineInteractionNodeDecorator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790320, PlayTimelineInteractionNodeDecorator_OnTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayTimelineInteractionNodeDecorator * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::PlayTimelineInteractionNodeDecorator
