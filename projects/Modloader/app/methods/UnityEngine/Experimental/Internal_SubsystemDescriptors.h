#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISubsystemDescriptorImpl.h>
#include <Modloader/app/structs/SubsystemDescriptor.h>

namespace app::classes::UnityEngine::Experimental::Internal_SubsystemDescriptors {
    IL2CPP_REGISTER_METHOD(0x03175500, bool, Internal_AddDescriptor, app::SubsystemDescriptor* descriptor)
    IL2CPP_REGISTER_METHOD(0x03175770, void, Internal_InitializeManagedDescriptor, void* ptr, app::ISubsystemDescriptorImpl* desc)
    IL2CPP_REGISTER_METHOD(0x03175860, void, Internal_ClearManagedDescriptors, )
    IL2CPP_REGISTER_METHOD(0x03175AA0, void, cctor, )
} // namespace app::classes::UnityEngine::Experimental::Internal_SubsystemDescriptors
