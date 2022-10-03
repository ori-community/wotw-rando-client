#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintConverter {
        namespace {
            app::ConstraintConverter__Class* type_info_ref = nullptr;
        }
        app::ConstraintConverter__Class** type_info = &type_info_ref;
        inline app::ConstraintConverter__Class* get_class() {
            return il2cpp::get_class<app::ConstraintConverter__Class>(type_info, "System.Data", "ConstraintConverter");
        }
        inline app::ConstraintConverter* create() {
            return il2cpp::create_object<app::ConstraintConverter>(get_class());
        }
    } // namespace ConstraintConverter
} // namespace app::classes::types
