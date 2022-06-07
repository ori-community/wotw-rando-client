#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::IntegratedSubsystemDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IntegratedSubsystemDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ISubsystemDescriptorImpl_set_ptr, (app::IntegratedSubsystemDescriptor * this_ptr, void * value))
}
