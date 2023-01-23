#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingParameters_SliceList {
    IL2CPP_REGISTER_METHOD(0x001F1330, void, set_Item, (app::RendererCullingParameters_SliceList__Boxed * this_ptr, int32_t i, float value))
    IL2CPP_REGISTER_METHODINFO(0x04711860, RendererCullingParameters_SliceList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_Length, (app::RendererCullingParameters_SliceList__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025243A0, app::RendererCullingParameters_SliceList, op_Implicit, (app::Single__Array * array))
    IL2CPP_REGISTER_METHODINFO(0x047976F0, RendererCullingParameters_SliceList_op_Implicit__MethodInfo)
} // namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingParameters_SliceList
