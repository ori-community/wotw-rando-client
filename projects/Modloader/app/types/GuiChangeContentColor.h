#pragma once
#include <Modloader/app/structs/GuiChangeContentColor.h>
#include <Modloader/app/structs/GuiChangeContentColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiChangeContentColor {
        inline app::GuiChangeContentColor__Class** type_info() {
            static app::GuiChangeContentColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiChangeContentColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiChangeContentColor__Class* get_class() {
            return il2cpp::get_class<app::GuiChangeContentColor__Class>(type_info(), "Moon.Gui", "GuiChangeContentColor");
        }
        inline app::GuiChangeContentColor* create() {
            return il2cpp::create_object<app::GuiChangeContentColor>(get_class());
        }
    } // namespace GuiChangeContentColor
} // namespace app::classes::types
