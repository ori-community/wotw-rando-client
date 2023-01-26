#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_UnityEngine_ParticleCollisionEvent_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_ParticleCollisionEvent_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_ParticleCollisionEvent_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UnityEngine_ParticleCollisionEvent_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028D4530, app::Comparer_1_UnityEngine_ParticleCollisionEvent_*, Create, (app::Comparison_1_UnityEngine_ParticleCollisionEvent_ * comparison))
    IL2CPP_REGISTER_METHOD(0x028D4730, app::Comparer_1_UnityEngine_ParticleCollisionEvent_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0280EC20, int32_t, IComparer_Compare, (app::Comparer_1_UnityEngine_ParticleCollisionEvent_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_UnityEngine_ParticleCollisionEvent_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_ParticleCollisionEvent_
