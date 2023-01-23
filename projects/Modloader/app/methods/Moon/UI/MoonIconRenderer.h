#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonIconRenderer_1.h>
#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Moon::UI::MoonIconRenderer {
    IL2CPP_REGISTER_METHOD(0x01182020, void, Prepare, (app::MoonIconRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01182290, void, Add, (app::MoonIconRenderer_1 * this_ptr, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x01182C40, void, SetIconPosition, (app::MoonIconRenderer_1 * this_ptr, app::GameObject* icon, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x01182E00, void, Apply, (app::MoonIconRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01183240, void, ctor, (app::MoonIconRenderer_1 * this_ptr))
} // namespace app::classes::Moon::UI::MoonIconRenderer
