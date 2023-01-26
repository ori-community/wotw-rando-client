#pragma once
#include <Modloader/app/structs/GuiEnable.h>
#include <Modloader/app/structs/GuiEnable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiEnable {
        inline app::GuiEnable__Class** type_info() {
            static app::GuiEnable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiEnable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiEnable__Class* get_class() {
            return il2cpp::get_class<app::GuiEnable__Class>(type_info(), "Moon.Gui", "GuiEnable");
        }
        inline app::GuiEnable* create() {
            return il2cpp::create_object<app::GuiEnable>(get_class());
        }
    } // namespace GuiEnable
} // namespace app::classes::types
