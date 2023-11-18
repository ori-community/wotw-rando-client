#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonIconRenderer.h>
#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CatlikeCoding::TextBox::MoonIconRenderer {
    IL2CPP_REGISTER_METHOD(0x0102ED10, void, Prepare, (app::MoonIconRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102EF80, void, Add, (app::MoonIconRenderer * this_ptr, app::CharMetaData meta, app::Vector2 offset, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0102F950, void, SetIconPosition, (app::MoonIconRenderer * this_ptr, app::GameObject* icon, app::CharMetaData meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x0102FB10, void, Apply, (app::MoonIconRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010300D0, void, ctor, (app::MoonIconRenderer * this_ptr))
} // namespace app::classes::CatlikeCoding::TextBox::MoonIconRenderer
