#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireStickManager {
        namespace {
            app::FireStickManager__Class* type_info_ref = nullptr;
        }
        app::FireStickManager__Class** type_info = &type_info_ref;
        inline app::FireStickManager__Class* get_class() {
            return il2cpp::get_class<app::FireStickManager__Class>(type_info, "", "FireStickManager");
        }
        inline app::FireStickManager* create() {
            return il2cpp::create_object<app::FireStickManager>(get_class());
        }
    } // namespace FireStickManager
} // namespace app::classes::types
