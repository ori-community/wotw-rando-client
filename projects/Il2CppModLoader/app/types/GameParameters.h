#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameParameters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameParameters__Class** type_info;
        inline app::GameParameters__Class* get_class() {
            return il2cpp::get_class<app::GameParameters__Class>(type_info, "", "GameParameters");
        }
        inline app::GameParameters* create() {
            return il2cpp::create_object<app::GameParameters>(get_class());
        }
    } // namespace GameParameters
} // namespace app::classes::types
