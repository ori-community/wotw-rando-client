#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnTextBoxes {
        namespace {
            app::SpawnTextBoxes__Class* type_info_ref = nullptr;
        }
        app::SpawnTextBoxes__Class** type_info = &type_info_ref;
        inline app::SpawnTextBoxes__Class* get_class() {
            return il2cpp::get_class<app::SpawnTextBoxes__Class>(type_info, "", "SpawnTextBoxes");
        }
        inline app::SpawnTextBoxes* create() {
            return il2cpp::create_object<app::SpawnTextBoxes>(get_class());
        }
    } // namespace SpawnTextBoxes
} // namespace app::classes::types
