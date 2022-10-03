#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartSet {
        namespace {
            app::CartSet__Class* type_info_ref = nullptr;
        }
        app::CartSet__Class** type_info = &type_info_ref;
        inline app::CartSet__Class* get_class() {
            return il2cpp::get_class<app::CartSet__Class>(type_info, "", "CartSet");
        }
        inline app::CartSet* create() {
            return il2cpp::create_object<app::CartSet>(get_class());
        }
    } // namespace CartSet
} // namespace app::classes::types
