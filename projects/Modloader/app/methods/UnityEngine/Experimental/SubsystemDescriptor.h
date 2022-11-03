#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::SubsystemDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubsystemDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String*, get_id, (app::SubsystemDescriptor * this_ptr))
} // namespace app::classes::UnityEngine::Experimental::SubsystemDescriptor
