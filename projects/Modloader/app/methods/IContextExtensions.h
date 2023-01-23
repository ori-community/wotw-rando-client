#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/AnimationLayerContext.h>
#include <Modloader/app/structs/AnimationAdditiveStrengthContext.h>
#include <Modloader/app/structs/ContinueConditionContext.h>
#include <Modloader/app/structs/IRecordingContext.h>
#include <Modloader/app/structs/ITimelineContext.h>
#include <Modloader/app/structs/AnimationContext.h>
#include <Modloader/app/structs/RecordingContext.h>
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#include <Modloader/app/structs/TweenDelayAnimatorContext.h>
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>

namespace app::classes::IContextExtensions {
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::Object*, GetContextAs_1, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHOD(0x015EA880, app::AnimationLayerContext, GetContextAs_2, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04727C98, IContextExtensions_GetContextAs_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::AnimationAdditiveStrengthContext*, GetContextAs_3, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04754A60, IContextExtensions_GetContextAs_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ContinueConditionContext*, GetContextAs_4, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x0470D078, IContextExtensions_GetContextAs_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::IRecordingContext*, GetContextAs_5, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x0478AF18, IContextExtensions_GetContextAs_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ITimelineContext*, GetContextAs_6, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x047903B0, IContextExtensions_GetContextAs_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAA40, app::AnimationContext, GetContextAs_7, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x0475BC00, IContextExtensions_GetContextAs_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EABD0, app::RecordingContext, GetContextAs_8, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04704050, IContextExtensions_GetContextAs_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::IntensityMultiplierContext*, GetContextAs_9, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04736EF0, IContextExtensions_GetContextAs_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::CameraShakeModifierContext*, GetContextAs_10, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04747288, IContextExtensions_GetContextAs_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::TweenDelayAnimatorContext*, GetContextAs_11, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x04732BE8, IContextExtensions_GetContextAs_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAD90, app::ForceRefreshAnimatorContext*, GetContextAs_12, (app::IContext * context, bool* sucess))
    IL2CPP_REGISTER_METHODINFO(0x0472C648, IContextExtensions_GetContextAs_11__MethodInfo)
} // namespace app::classes::IContextExtensions
