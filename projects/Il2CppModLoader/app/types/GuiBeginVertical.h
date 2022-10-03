#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuiBeginVertical {
        namespace {
            app::GuiBeginVertical__Class* type_info_ref = nullptr;
        }
        app::GuiBeginVertical__Class** type_info = &type_info_ref;
        inline app::GuiBeginVertical__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginVertical__Class>(type_info, "Moon.Gui", "GuiBeginVertical");
        }
        inline app::GuiBeginVertical* create() {
            return il2cpp::create_object<app::GuiBeginVertical>(get_class());
        }
    } // namespace GuiBeginVertical
} // namespace app::classes::types
