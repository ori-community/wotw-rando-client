#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharMetaData_1.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::UI::TextRenderer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Prepare, app::TextRenderer_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Add, app::TextRenderer_1* this_ptr, app::CharMetaData_1 meta, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, app::TextRenderer_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TextRenderer_1* this_ptr)
} // namespace app::classes::Moon::UI::TextRenderer
