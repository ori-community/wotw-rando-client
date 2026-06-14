#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/Canvas_WillRenderCanvases.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderMode__Enum.h>

namespace app::classes::UnityEngine::Canvas {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5510, void, add_willRenderCanvases, app::Canvas_WillRenderCanvases* value)
    IL2CPP_REGISTER_METHOD(0x031A5610, void, remove_willRenderCanvases, app::Canvas_WillRenderCanvases* value)
    IL2CPP_REGISTER_METHOD(0x031A5710, app::RenderMode__Enum, get_renderMode, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5760, bool, get_isRootCanvas, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A57B0, float, get_scaleFactor, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5800, void, set_scaleFactor, app::Canvas* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031A5860, float, get_referencePixelsPerUnit, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A58B0, void, set_referencePixelsPerUnit, app::Canvas* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x031A5910, bool, get_pixelPerfect, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5960, int32_t, get_renderOrder, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A59B0, bool, get_overrideSorting, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5A00, void, set_overrideSorting, app::Canvas* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031A5A60, int32_t, get_sortingOrder, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5AB0, void, set_sortingOrder, app::Canvas* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031A5B10, int32_t, get_targetDisplay, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5B60, int32_t, get_sortingLayerID, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5BB0, void, set_sortingLayerID, app::Canvas* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031A5C10, app::Canvas*, get_rootCanvas, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5C60, app::Camera*, get_worldCamera, app::Canvas* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A5CB0, void, set_worldCamera, app::Canvas* this_ptr, app::Camera* value)
    IL2CPP_REGISTER_METHOD(0x031A5D10, app::Material*, GetDefaultCanvasMaterial, )
    IL2CPP_REGISTER_METHOD(0x031A5D60, app::Material*, GetETC1SupportedCanvasMaterial, )
    IL2CPP_REGISTER_METHOD(0x031A5DB0, void, ForceUpdateCanvases, )
    IL2CPP_REGISTER_METHOD(0x031A5DB0, void, SendWillRenderCanvases, )
} // namespace app::classes::UnityEngine::Canvas
