#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XRNodeState__Boxed.h>
#include <Modloader/app/structs/XRNode__Enum.h>

namespace app::classes::UnityEngine::XR::XRNodeState {
    IL2CPP_REGISTER_METHOD(0x0010D440, void, set_uniqueID, app::XRNodeState__Boxed* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_nodeType, app::XRNodeState__Boxed* this_ptr, app::XRNode__Enum value)
    IL2CPP_REGISTER_METHOD(0x0024B1C0, void, set_tracked, app::XRNodeState__Boxed* this_ptr, bool value)
} // namespace app::classes::UnityEngine::XR::XRNodeState
