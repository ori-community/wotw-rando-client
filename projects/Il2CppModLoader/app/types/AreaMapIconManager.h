#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconManager {
        namespace {
            app::AreaMapIconManager__Class* type_info_ref = nullptr;
        }
        app::AreaMapIconManager__Class** type_info = &type_info_ref;
        inline app::AreaMapIconManager__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconManager__Class>(type_info, "", "AreaMapIconManager");
        }
        inline app::AreaMapIconManager* create() {
            return il2cpp::create_object<app::AreaMapIconManager>(get_class());
        }
    } // namespace AreaMapIconManager
} // namespace app::classes::types
