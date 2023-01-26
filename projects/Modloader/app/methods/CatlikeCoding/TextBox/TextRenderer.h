#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextRenderer.h>
#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CatlikeCoding::TextBox::TextRenderer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Prepare, (app::TextRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Add, (app::TextRenderer * this_ptr, app::CharMetaData meta, app::Vector2 offset, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::TextRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextRenderer * this_ptr))
} // namespace app::classes::CatlikeCoding::TextBox::TextRenderer
