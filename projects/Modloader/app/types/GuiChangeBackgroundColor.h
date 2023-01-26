#pragma once
#include <Modloader/app/structs/GuiChangeBackgroundColor.h>
#include <Modloader/app/structs/GuiChangeBackgroundColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiChangeBackgroundColor {
        inline app::GuiChangeBackgroundColor__Class** type_info() {
            static app::GuiChangeBackgroundColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiChangeBackgroundColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiChangeBackgroundColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeBackgroundColor__Class>(type_info(), "Moon.Gui", "GuiChangeBackgroundColor");
        }
        inline app::GuiChangeBackgroundColor* create() {
            return il2cpp::create_object<app::GuiChangeBackgroundColor>(get_class());
        }
    } // namespace GuiChangeBackgroundColor
} // namespace app::classes::types
