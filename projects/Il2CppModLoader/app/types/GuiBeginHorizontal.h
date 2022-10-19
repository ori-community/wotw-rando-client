#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiBeginHorizontal {
        namespace {
            inline app::GuiBeginHorizontal__Class* type_info_ref = nullptr;
        }
        inline app::GuiBeginHorizontal__Class** type_info = &type_info_ref;
        inline app::GuiBeginHorizontal__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginHorizontal__Class>(type_info, "Moon.Gui", "GuiBeginHorizontal");
        }
        inline app::GuiBeginHorizontal* create() {
            return il2cpp::create_object<app::GuiBeginHorizontal>(get_class());
        }
    } // namespace GuiBeginHorizontal
} // namespace app::classes::types
