#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwordComboMoveAdapter {
        namespace {
            inline app::SwordComboMoveAdapter__Class* type_info_ref = nullptr;
        }
        inline app::SwordComboMoveAdapter__Class** type_info = &type_info_ref;
        inline app::SwordComboMoveAdapter__Class* get_class() {
            return il2cpp::get_class<app::SwordComboMoveAdapter__Class>(type_info, "Moon.ComboSystem", "SwordComboMoveAdapter");
        }
        inline app::SwordComboMoveAdapter* create() {
            return il2cpp::create_object<app::SwordComboMoveAdapter>(get_class());
        }
    } // namespace SwordComboMoveAdapter
} // namespace app::classes::types
