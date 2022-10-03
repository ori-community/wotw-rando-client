#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathFollower {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PathFollower__Class** type_info;
        inline app::PathFollower__Class* get_class() {
            return il2cpp::get_class<app::PathFollower__Class>(type_info, "", "PathFollower");
        }
        inline app::PathFollower* create() {
            return il2cpp::create_object<app::PathFollower>(get_class());
        }
    } // namespace PathFollower
} // namespace app::classes::types
