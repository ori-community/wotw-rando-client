#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableParticleEmitterOnStart_Start_d_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::EnableParticleEmitterOnStart__Start_d__1 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFCE10, bool, MoveNext, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFD090, void, IEnumerator_Reset, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::EnableParticleEmitterOnStart_Start_d_1* this_ptr)
} // namespace app::classes::EnableParticleEmitterOnStart__Start_d__1
