#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/TextMeshCylinderRenderer_1.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::UI::TextMeshCylinderRenderer {
    IL2CPP_REGISTER_METHOD(0x01188E90, void, Prepare, app::TextMeshCylinderRenderer_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01189000, void, Add, app::TextMeshCylinderRenderer_1* this_ptr, app::CharMetaData_1 meta, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(0x011896E0, void, ctor, app::TextMeshCylinderRenderer_1* this_ptr)
} // namespace app::classes::Moon::UI::TextMeshCylinderRenderer
