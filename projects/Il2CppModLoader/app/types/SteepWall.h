#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteepWall {
        namespace {
            app::SteepWall__Class* type_info_ref = nullptr;
        }
        app::SteepWall__Class** type_info = &type_info_ref;
        inline app::SteepWall__Class* get_class() {
            return il2cpp::get_class<app::SteepWall__Class>(type_info, "", "SteepWall");
        }
        inline app::SteepWall* create() {
            return il2cpp::create_object<app::SteepWall>(get_class());
        }
    } // namespace SteepWall
} // namespace app::classes::types
