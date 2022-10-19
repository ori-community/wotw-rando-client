#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiChangeContentColor {
        namespace {
            inline app::GuiChangeContentColor__Class* type_info_ref = nullptr;
        }
        inline app::GuiChangeContentColor__Class** type_info = &type_info_ref;
        inline app::GuiChangeContentColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeContentColor__Class>(type_info, "Moon.Gui", "GuiChangeContentColor");
        }
        inline app::GuiChangeContentColor* create() {
            return il2cpp::create_object<app::GuiChangeContentColor>(get_class());
        }
    } // namespace GuiChangeContentColor
} // namespace app::classes::types
