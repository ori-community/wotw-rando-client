#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuiBeginScrollView {
        namespace {
            app::GuiBeginScrollView__Class* type_info_ref = nullptr;
        }
        app::GuiBeginScrollView__Class** type_info = &type_info_ref;
        inline app::GuiBeginScrollView__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginScrollView__Class>(type_info, "Moon.Gui", "GuiBeginScrollView");
        }
        inline app::GuiBeginScrollView* create() {
            return il2cpp::create_object<app::GuiBeginScrollView>(get_class());
        }
    } // namespace GuiBeginScrollView
} // namespace app::classes::types
