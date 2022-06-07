#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Internal_SubsystemInstances {
    IL2CPP_REGISTER_METHOD(0x03175CD0, void, Internal_InitializeManagedInstance, (void * ptr, app::IntegratedSubsystem * inst))
    IL2CPP_REGISTER_METHOD(0x03175E00, void, Internal_ClearManagedInstances, ())
    IL2CPP_REGISTER_METHOD(0x031760A0, void, Internal_RemoveInstanceByPtr, (void * ptr))
    IL2CPP_REGISTER_METHOD(0x031762E0, void, cctor, ())
}
