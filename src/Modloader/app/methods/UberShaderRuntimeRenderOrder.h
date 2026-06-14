#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberShaderRuntimeRenderOrder.h>

namespace app::classes::UberShaderRuntimeRenderOrder {
    IL2CPP_REGISTER_METHOD(0x01284B10, bool, get_IsInScene, app::UberShaderRuntimeRenderOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01284B20, void, set_IsInScene, app::UberShaderRuntimeRenderOrder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::UberShaderRuntimeRenderOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01284B30, void, LateUpdate, app::UberShaderRuntimeRenderOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01285130,
        void,
        SetRenderQueueOnFast,
        app::UberShaderRuntimeRenderOrder* this_ptr,
        app::Transform* trans,
        app::Renderer* rend,
        float z
    )
    IL2CPP_REGISTER_METHOD(0x01285340, void, SetRenderQueueOn, app::UberShaderRuntimeRenderOrder* this_ptr, app::Transform* trans)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::UberShaderRuntimeRenderOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012855D0, void, cctor, )
} // namespace app::classes::UberShaderRuntimeRenderOrder
