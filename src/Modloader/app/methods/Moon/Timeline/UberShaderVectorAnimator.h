#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/UberShaderVectorAnimator.h>
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum.h>

namespace app::classes::Moon::Timeline::UberShaderVectorAnimator {
    IL2CPP_REGISTER_METHOD(0x00D1AEB0, app::GameObject*, get_EffectiveTarget, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1AF70, bool, get_ShouldMaskValue, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Renderer__Array*, get_Entries, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1AFA0, void, OnStartPlayback, app::UberShaderVectorAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D1AFC0, void, PopulateTargets, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1B160, void, OnUpdateEntity, app::UberShaderVectorAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00D1B190, void, SetTime, app::UberShaderVectorAnimator* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00D1B430, app::String__Array*, GetCustomNames, app::UberShaderVectorAnimator_VectorProperty__Enum property)
    IL2CPP_REGISTER_METHOD(
        0x00D1B6F0,
        void,
        SynchronizePad,
        app::UberShaderVectorAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record,
        app::TimelineEntity* entity,
        app::Constraint__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x00D1B8E0, void, ctor, app::UberShaderVectorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D1B9D0, void, cctor, )
} // namespace app::classes::Moon::Timeline::UberShaderVectorAnimator
