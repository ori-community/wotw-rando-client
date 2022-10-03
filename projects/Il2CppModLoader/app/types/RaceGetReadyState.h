#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceGetReadyState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceGetReadyState__Class** type_info;
        inline app::RaceGetReadyState__Class* get_class() {
            return il2cpp::get_class<app::RaceGetReadyState__Class>(type_info, "", "RaceGetReadyState");
        }
        inline app::RaceGetReadyState* create() {
            return il2cpp::create_object<app::RaceGetReadyState>(get_class());
        }
    } // namespace RaceGetReadyState
} // namespace app::classes::types
