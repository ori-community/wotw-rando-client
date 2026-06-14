#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RendererCullingParameters__Boxed.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RendererCullingParameters {
    IL2CPP_REGISTER_METHOD(0x001F1180, void, Init, app::RendererCullingParameters__Boxed* this_ptr)
}
