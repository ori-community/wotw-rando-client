#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Internal_SubsystemDescriptors {
    IL2CPP_REGISTER_METHOD(0x03175500, bool, Internal_AddDescriptor, (app::SubsystemDescriptor * descriptor))
    IL2CPP_REGISTER_METHOD(0x03175770, void, Internal_InitializeManagedDescriptor, (void * ptr, app::ISubsystemDescriptorImpl * desc))
    IL2CPP_REGISTER_METHOD(0x03175860, void, Internal_ClearManagedDescriptors, ())
    IL2CPP_REGISTER_METHOD(0x03175AA0, void, cctor, ())
}
