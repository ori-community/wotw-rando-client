#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LianaEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LianaEntity__Class** type_info;
        inline app::LianaEntity__Class* get_class() {
            return il2cpp::get_class<app::LianaEntity__Class>(type_info, "", "LianaEntity");
        }
        inline app::LianaEntity* create() {
            return il2cpp::create_object<app::LianaEntity>(get_class());
        }
    } // namespace LianaEntity
} // namespace app::classes::types
