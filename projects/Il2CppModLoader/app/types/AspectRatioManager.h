#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AspectRatioManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AspectRatioManager__Class** type_info;
        inline app::AspectRatioManager__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioManager__Class>(type_info, "", "AspectRatioManager");
        }
        inline app::AspectRatioManager* create() {
            return il2cpp::create_object<app::AspectRatioManager>(get_class());
        }
    } // namespace AspectRatioManager
} // namespace app::classes::types
