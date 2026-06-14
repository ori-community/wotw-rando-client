#pragma once
#include <Modloader/app/structs/GuiChangeColor.h>
#include <Modloader/app/structs/GuiChangeColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiChangeColor {
        inline app::GuiChangeColor__Class** type_info() {
            static app::GuiChangeColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiChangeColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiChangeColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeColor__Class>(type_info(), "Moon.Gui", "GuiChangeColor");
        }
        inline app::GuiChangeColor* create() {
            return il2cpp::create_object<app::GuiChangeColor>(get_class());
        }
    } // namespace GuiChangeColor
} // namespace app::classes::types
