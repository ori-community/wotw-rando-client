#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameWorldArea {
        namespace {
            app::GameWorldArea__Class* type_info_ref = nullptr;
        }
        app::GameWorldArea__Class** type_info = &type_info_ref;
        inline app::GameWorldArea__Class* get_class() {
            return il2cpp::get_class<app::GameWorldArea__Class>(type_info, "", "GameWorldArea");
        }
        inline app::GameWorldArea* create() {
            return il2cpp::create_object<app::GameWorldArea>(get_class());
        }
        inline app::GameWorldArea__Array* create_array(int size) {
            return il2cpp::array_new<app::GameWorldArea__Array>(get_class(), size);
        }
        inline app::GameWorldArea__Array* create_array(const std::vector<app::GameWorldArea*>& items) {
            return il2cpp::array_new<app::GameWorldArea__Array>(get_class(), items);
        }
    } // namespace GameWorldArea
} // namespace app::classes::types
