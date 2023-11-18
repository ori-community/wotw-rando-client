#pragma once
#include <Modloader/app/structs/GuiBeginVertical.h>
#include <Modloader/app/structs/GuiBeginVertical__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiBeginVertical {
        inline app::GuiBeginVertical__Class** type_info() {
            static app::GuiBeginVertical__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiBeginVertical__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiBeginVertical__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginVertical__Class>(type_info(), "Moon.Gui", "GuiBeginVertical");
        }
        inline app::GuiBeginVertical* create() {
            return il2cpp::create_object<app::GuiBeginVertical>(get_class());
        }
    } // namespace GuiBeginVertical
} // namespace app::classes::types
