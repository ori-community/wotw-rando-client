#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChakramProjectile {
        namespace {
            inline app::ChakramProjectile__Class* type_info_ref = nullptr;
        }
        inline app::ChakramProjectile__Class** type_info = &type_info_ref;
        inline app::ChakramProjectile__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectile__Class>(type_info, "", "ChakramProjectile");
        }
        inline app::ChakramProjectile* create() {
            return il2cpp::create_object<app::ChakramProjectile>(get_class());
        }
    } // namespace ChakramProjectile
} // namespace app::classes::types
