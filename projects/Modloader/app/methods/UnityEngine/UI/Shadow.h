#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Shadow.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::Shadow {
    IL2CPP_REGISTER_METHOD(0x02662FD0, void, ctor, (app::Shadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024AE370, app::Color, get_effectColor, (app::Shadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02674F80, void, set_effectColor, (app::Shadow * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02675070, app::Vector2, get_effectDistance, (app::Shadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02675090, void, set_effectDistance, (app::Shadow * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x02675240, bool, get_useGraphicAlpha, (app::Shadow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02675250, void, set_useGraphicAlpha, (app::Shadow * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02675340, void, ApplyShadowZeroAlloc, (app::Shadow * this_ptr, app::List_1_UnityEngine_UIVertex_* verts, app::Color32 color, int32_t start, int32_t end, float x, float y))
    IL2CPP_REGISTER_METHOD(0x02675800, void, ApplyShadow, (app::Shadow * this_ptr, app::List_1_UnityEngine_UIVertex_* verts, app::Color32 color, int32_t start, int32_t end, float x, float y))
    IL2CPP_REGISTER_METHOD(0x02675810, void, ModifyMesh, (app::Shadow * this_ptr, app::VertexHelper* vh))
} // namespace app::classes::UnityEngine::UI::Shadow
