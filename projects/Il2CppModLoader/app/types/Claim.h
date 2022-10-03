#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Claim {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Claim__Class** type_info;
        inline app::Claim__Class* get_class() {
            return il2cpp::get_class<app::Claim__Class>(type_info, "System.Security.Claims", "Claim");
        }
        inline app::Claim* create() {
            return il2cpp::create_object<app::Claim>(get_class());
        }
        inline app::Claim__Array* create_array(int size) {
            return il2cpp::array_new<app::Claim__Array>(get_class(), size);
        }
    } // namespace Claim
} // namespace app::classes::types
