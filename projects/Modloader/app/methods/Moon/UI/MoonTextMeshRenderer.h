#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTextMeshRenderer_1.h>
#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::UI::MoonTextMeshRenderer {
    IL2CPP_REGISTER_METHOD(0x011835A0, void, OnDestroy, (app::MoonTextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01183650, void, Start, (app::MoonTextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01183750, void, Prepare, (app::MoonTextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01184430, void, Add, (app::MoonTextMeshRenderer_1 * this_ptr, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x01184B20, void, Apply, (app::MoonTextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01184CE0, void, ctor, (app::MoonTextMeshRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01184D00, void, cctor, ())
} // namespace app::classes::Moon::UI::MoonTextMeshRenderer
