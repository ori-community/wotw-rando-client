#pragma once
#include <Modloader/app/structs/GuiBeginHorizontal.h>
#include <Modloader/app/structs/GuiBeginHorizontal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiBeginHorizontal {
        inline app::GuiBeginHorizontal__Class** type_info() {
            static app::GuiBeginHorizontal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiBeginHorizontal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiBeginHorizontal__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginHorizontal__Class>(type_info(), "Moon.Gui", "GuiBeginHorizontal");
        }
        inline app::GuiBeginHorizontal* create() {
            return il2cpp::create_object<app::GuiBeginHorizontal>(get_class());
        }
    } // namespace GuiBeginHorizontal
} // namespace app::classes::types
