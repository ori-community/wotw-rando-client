#pragma once
#include <Modloader/app/structs/GuiBeginScrollView.h>
#include <Modloader/app/structs/GuiBeginScrollView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuiBeginScrollView {
        inline app::GuiBeginScrollView__Class** type_info() {
            static app::GuiBeginScrollView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuiBeginScrollView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuiBeginScrollView__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginScrollView__Class>(type_info(), "Moon.Gui", "GuiBeginScrollView");
        }
        inline app::GuiBeginScrollView* create() {
            return il2cpp::create_object<app::GuiBeginScrollView>(get_class());
        }
    } // namespace GuiBeginScrollView
} // namespace app::classes::types
