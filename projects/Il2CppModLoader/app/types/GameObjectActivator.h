#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectActivator {
        namespace {
            app::GameObjectActivator__Class* type_info_ref = nullptr;
        }
        app::GameObjectActivator__Class** type_info = &type_info_ref;
        inline app::GameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectActivator__Class>(type_info, "", "GameObjectActivator");
        }
        inline app::GameObjectActivator* create() {
            return il2cpp::create_object<app::GameObjectActivator>(get_class());
        }
    } // namespace GameObjectActivator
} // namespace app::classes::types
