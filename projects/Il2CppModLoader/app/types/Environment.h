#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Environment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Environment__Class** type_info;
        inline app::Environment__Class* get_class() {
            return il2cpp::get_class<app::Environment__Class>(type_info, "System", "Environment");
        }
        inline app::Environment* create() {
            return il2cpp::create_object<app::Environment>(get_class());
        }
    } // namespace Environment
} // namespace app::classes::types
