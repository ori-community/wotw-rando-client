#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComboMoveSettings {
        namespace {
            app::ComboMoveSettings__Class* type_info_ref = nullptr;
        }
        app::ComboMoveSettings__Class** type_info = &type_info_ref;
        inline app::ComboMoveSettings__Class* get_class() {
            return il2cpp::get_class<app::ComboMoveSettings__Class>(type_info, "Moon.ComboSystem", "ComboMoveSettings");
        }
        inline app::ComboMoveSettings* create() {
            return il2cpp::create_object<app::ComboMoveSettings>(get_class());
        }
    } // namespace ComboMoveSettings
} // namespace app::classes::types
