#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorAnimator.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ColorAnimator {
    IL2CPP_REGISTER_METHOD(0x0075FB80, app::GameObject*, get_EffectiveTarget, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075FC40, app::GameObject*, get_ExternalTarget, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075FCD0, app::Renderer*, get_EffectiveRenderer, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075FDC0, app::Color, get_ColorMask, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Renderer__Array*, get_Entries, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075FE20, void, OnStartPlayback, app::ColorAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0075FE40, void, PopulateTargets, app::ColorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0075FFF0, void, OnUpdateEntity, app::ColorAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00760020, void, SetTime, app::ColorAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(
        0x00760290,
        void,
        SynchronizePad,
        app::ColorAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record,
        app::TimelineEntity* entity,
        app::Constraint__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x007604B0, void, ctor, app::ColorAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::ColorAnimator
