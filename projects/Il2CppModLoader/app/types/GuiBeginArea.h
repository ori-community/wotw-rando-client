#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuiBeginArea {
        namespace {
            inline app::GuiBeginArea__Class* type_info_ref = nullptr;
        }
        inline app::GuiBeginArea__Class** type_info = &type_info_ref;
        inline app::GuiBeginArea__Class* get_class() {
            return il2cpp::get_class<app::GuiBeginArea__Class>(type_info, "Moon.Gui", "GuiBeginArea");
        }
        inline app::GuiBeginArea* create() {
            return il2cpp::create_object<app::GuiBeginArea>(get_class());
        }
    } // namespace GuiBeginArea
} // namespace app::classes::types
