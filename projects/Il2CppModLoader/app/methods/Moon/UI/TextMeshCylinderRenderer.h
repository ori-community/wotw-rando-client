#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::TextMeshCylinderRenderer {
    IL2CPP_REGISTER_METHOD(0x01188E90, void, Prepare, (app::TextMeshCylinderRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01189000, void, Add, (app::TextMeshCylinderRenderer_1 * this_ptr, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x011896E0, void, ctor, (app::TextMeshCylinderRenderer_1 * this_ptr))
}
