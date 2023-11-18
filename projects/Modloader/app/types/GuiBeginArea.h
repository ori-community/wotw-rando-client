#pragma once
#include <Modloader/app/structs/GuiBeginArea.h>
#include <Modloader/app/structs/GuiBeginArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiBeginArea {
        inline app::GuiBeginArea__Class** type_info() {
            static app::GuiBeginArea__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiBeginArea__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiBeginArea__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginArea__Class>(type_info(), "Moon.Gui", "GuiBeginArea");
        }
        inline app::GuiBeginArea* create() {
            return il2cpp::create_object<app::GuiBeginArea>(get_class());
        }
    } // namespace GuiBeginArea
} // namespace app::classes::types
