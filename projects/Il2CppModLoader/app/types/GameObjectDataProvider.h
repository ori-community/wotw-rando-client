#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectDataProvider {
        namespace {
            app::GameObjectDataProvider__Class* type_info_ref = nullptr;
        }
        app::GameObjectDataProvider__Class** type_info = &type_info_ref;
        inline app::GameObjectDataProvider__Class* get_class() {
            return il2cpp::get_class<app::GameObjectDataProvider__Class>(type_info, "", "GameObjectDataProvider");
        }
        inline app::GameObjectDataProvider* create() {
            return il2cpp::create_object<app::GameObjectDataProvider>(get_class());
        }
    } // namespace GameObjectDataProvider
} // namespace app::classes::types
