#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrefabProvider {
        namespace {
            app::PrefabProvider__Class* type_info_ref = nullptr;
        }
        app::PrefabProvider__Class** type_info = &type_info_ref;
        inline app::PrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::PrefabProvider__Class>(type_info, "", "PrefabProvider");
        }
        inline app::PrefabProvider* create() {
            return il2cpp::create_object<app::PrefabProvider>(get_class());
        }
    } // namespace PrefabProvider
} // namespace app::classes::types
