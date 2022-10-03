#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayValidator__Class** type_info;
        inline app::ReplayValidator__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidator__Class>(type_info, "Moon.Race", "ReplayValidator");
        }
        inline app::ReplayValidator* create() {
            return il2cpp::create_object<app::ReplayValidator>(get_class());
        }
    } // namespace ReplayValidator
} // namespace app::classes::types
