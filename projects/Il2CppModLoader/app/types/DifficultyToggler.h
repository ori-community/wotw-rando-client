#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyToggler {
        namespace {
            app::DifficultyToggler__Class* type_info_ref = nullptr;
        }
        app::DifficultyToggler__Class** type_info = &type_info_ref;
        inline app::DifficultyToggler__Class* get_class() {
            return il2cpp::get_class<app::DifficultyToggler__Class>(type_info, "", "DifficultyToggler");
        }
        inline app::DifficultyToggler* create() {
            return il2cpp::create_object<app::DifficultyToggler>(get_class());
        }
    } // namespace DifficultyToggler
} // namespace app::classes::types
