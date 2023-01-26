#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RendererCullingParameters_CategoryList__Boxed.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingParameters_CategoryList {
    IL2CPP_REGISTER_METHOD(0x001F12F0, void, set_Item, (app::RendererCullingParameters_CategoryList__Boxed * this_ptr, int32_t i, app::RendererCullingCategoryParameters value))
    IL2CPP_REGISTER_METHOD(0x001F1300, int32_t, get_Length, (app::RendererCullingParameters_CategoryList__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025240C0, app::RendererCullingParameters_CategoryList, op_Implicit, (app::RendererCullingCategoryParameters__Array * array))
} // namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingParameters_CategoryList
