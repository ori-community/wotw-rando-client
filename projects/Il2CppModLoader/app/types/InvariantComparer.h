#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvariantComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvariantComparer__Class** type_info;
        inline app::InvariantComparer__Class* get_class() {
            return il2cpp::get_class<app::InvariantComparer__Class>(type_info, "System", "InvariantComparer");
        }
        inline app::InvariantComparer* create() {
            return il2cpp::create_object<app::InvariantComparer>(get_class());
        }
    } // namespace InvariantComparer
} // namespace app::classes::types
