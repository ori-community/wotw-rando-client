#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::UI::VertexHelperExtension {
    IL2CPP_REGISTER_METHOD(0x01F2AA00, void, AddVert, (app::VertexHelper * obj, app::Vector3 position, app::Color32 color, app::Vector2 uv0, app::Vector2 uv1, app::Vector2 uv2, app::Vector2 uv3, app::Vector3 normal, app::Vector4 tangent))
}
