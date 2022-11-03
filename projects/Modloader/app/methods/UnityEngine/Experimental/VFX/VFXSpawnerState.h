#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::VFX::VFXSpawnerState {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::VFXSpawnerState * this_ptr, void* ptr, bool owner))
    IL2CPP_REGISTER_METHOD(0x031C13C0, app::VFXSpawnerState*, CreateSpawnerStateWrapper, ())
    IL2CPP_REGISTER_METHOD(0x031C1500, void, SetWrapValue, (app::VFXSpawnerState * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHODINFO(0x047873B0, VFXSpawnerState_SetWrapValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031C15C0, void, Release, (app::VFXSpawnerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C16A0, void, Finalize, (app::VFXSpawnerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C1730, void, Dispose, (app::VFXSpawnerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C17E0, void, Internal_Destroy, (void* ptr))
} // namespace app::classes::UnityEngine::Experimental::VFX::VFXSpawnerState
