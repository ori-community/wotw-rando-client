#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberCageGrid {
        namespace {
            app::UberCageGrid__Class* type_info_ref = nullptr;
        }
        app::UberCageGrid__Class** type_info = &type_info_ref;
        inline app::UberCageGrid__Class* get_class() {
            return il2cpp::get_class<app::UberCageGrid__Class>(type_info, "", "UberCageGrid");
        }
        inline app::UberCageGrid* create() {
            return il2cpp::create_object<app::UberCageGrid>(get_class());
        }
    } // namespace UberCageGrid
} // namespace app::classes::types
