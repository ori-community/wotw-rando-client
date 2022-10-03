#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChainValidationHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChainValidationHelper__Class** type_info;
        inline app::ChainValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ChainValidationHelper__Class>(type_info, "Mono.Net.Security", "ChainValidationHelper");
        }
        inline app::ChainValidationHelper* create() {
            return il2cpp::create_object<app::ChainValidationHelper>(get_class());
        }
    } // namespace ChainValidationHelper
} // namespace app::classes::types
