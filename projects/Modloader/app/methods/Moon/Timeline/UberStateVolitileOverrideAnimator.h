#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::UberStateVolitileOverrideAnimator {
    IL2CPP_REGISTER_METHOD(0x01E904A0, app::IGenericUberState*, get_ResolvedUberState, (app::UberStateVolitileOverrideAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E90570, void, OnStartPlayback, (app::UberStateVolitileOverrideAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::UberStateVolitileOverrideAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E90570, void, OnUpdateEntity, (app::UberStateVolitileOverrideAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E905C0, void, SynchronizePad, (app::UberStateVolitileOverrideAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::UberStateVolitileOverrideAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E906A0, void, ctor, (app::UberStateVolitileOverrideAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::UberStateVolitileOverrideAnimator
