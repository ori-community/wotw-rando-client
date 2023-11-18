#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RendererCullingCategoryParameters__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingCategoryParameters {
    IL2CPP_REGISTER_METHOD(0x001F0EF0, void, ctor, (app::RendererCullingCategoryParameters__Boxed * this_ptr, uint32_t mask, bool needs_list, bool per_slice))
}
