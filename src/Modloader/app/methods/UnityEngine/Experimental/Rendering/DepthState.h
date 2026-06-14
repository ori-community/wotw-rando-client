#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompareFunction__Enum.h>
#include <Modloader/app/structs/DepthState.h>
#include <Modloader/app/structs/DepthState__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Rendering::DepthState {
    IL2CPP_REGISTER_METHOD(0x001EC730, void, ctor, app::DepthState__Boxed* this_ptr, bool write_enabled, app::CompareFunction__Enum compare_function)
    IL2CPP_REGISTER_METHOD(0x024339C0, app::DepthState, get_Default, )
} // namespace app::classes::UnityEngine::Experimental::Rendering::DepthState
