#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::Outline {
    IL2CPP_REGISTER_METHOD(0x02662FD0, void, ctor, (app::Outline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02663000, void, ModifyMesh, (app::Outline * this_ptr, app::VertexHelper* vh))
} // namespace app::classes::UnityEngine::UI::Outline
