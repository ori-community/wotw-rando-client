#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entity_1 {
        namespace {
            app::Entity_1__Class* type_info_ref = nullptr;
        }
        app::Entity_1__Class** type_info = &type_info_ref;
        inline app::Entity_1__Class* get_class() {
            return il2cpp::get_class<app::Entity_1__Class>(type_info, "Moon.VisualDebug", "Entity");
        }
        inline app::Entity_1* create() {
            return il2cpp::create_object<app::Entity_1>(get_class());
        }
    } // namespace Entity_1
} // namespace app::classes::types
