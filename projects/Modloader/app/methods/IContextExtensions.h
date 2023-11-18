#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AnimationAdditiveStrengthContext.h>
#include <Modloader/app/structs/AnimationContext.h>
#include <Modloader/app/structs/AnimationLayerContext.h>
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#include <Modloader/app/structs/ContinueConditionContext.h>
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IRecordingContext.h>
#include <Modloader/app/structs/ITimelineContext.h>
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#include <Modloader/app/structs/RecordingContext.h>
#include <Modloader/app/structs/TweenDelayAnimatorContext.h>

namespace app::classes::IContextExtensions {
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::Object*, GetContextAs_1, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EA880, app::AnimationLayerContext, GetContextAs_2, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::AnimationAdditiveStrengthContext*, GetContextAs_3, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ContinueConditionContext*, GetContextAs_4, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::IRecordingContext*, GetContextAs_5, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ITimelineContext*, GetContextAs_6, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAA40, app::AnimationContext, GetContextAs_7, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EABD0, app::RecordingContext, GetContextAs_8, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::IntensityMultiplierContext*, GetContextAs_9, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::CameraShakeModifierContext*, GetContextAs_10, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::TweenDelayAnimatorContext*, GetContextAs_11, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ForceRefreshAnimatorContext*, GetContextAs_12, (app::IContext * context, bool* sucess))
} // namespace app::classes::IContextExtensions
