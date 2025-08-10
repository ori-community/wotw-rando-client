#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::RawImage {
    IL2CPP_REGISTER_METHOD(0x02663790, void, ctor, app::RawImage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026637C0, app::Texture*, get_mainTexture, app::RawImage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B76C0, app::Texture*, get_texture, app::RawImage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02663990, void, set_texture, app::RawImage* this_ptr, app::Texture* value)
    IL2CPP_REGISTER_METHOD(0x02663A80, app::Rect, get_uvRect, app::RawImage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02663A90, void, set_uvRect, app::RawImage* this_ptr, app::Rect value)
    IL2CPP_REGISTER_METHOD(0x02663B00, void, SetNativeSize, app::RawImage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02663D80, void, OnPopulateMesh, app::RawImage* this_ptr, app::VertexHelper* vh)
} // namespace app::classes::UnityEngine::UI::RawImage
