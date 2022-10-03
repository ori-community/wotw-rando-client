#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormHoleManager {
        namespace {
            app::WormHoleManager__Class* type_info_ref = nullptr;
        }
        app::WormHoleManager__Class** type_info = &type_info_ref;
        inline app::WormHoleManager__Class* get_class() {
            return il2cpp::get_class<app::WormHoleManager__Class>(type_info, "", "WormHoleManager");
        }
        inline app::WormHoleManager* create() {
            return il2cpp::create_object<app::WormHoleManager>(get_class());
        }
    } // namespace WormHoleManager
} // namespace app::classes::types
