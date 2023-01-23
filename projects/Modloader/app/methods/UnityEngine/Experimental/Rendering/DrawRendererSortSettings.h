#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DrawRendererSortSettings__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Rendering::DrawRendererSortSettings {
    IL2CPP_REGISTER_METHOD(0x001EC760, void, set_sortOrthographic, (app::DrawRendererSortSettings__Boxed * this_ptr, bool value))
}
