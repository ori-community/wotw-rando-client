#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsGlobalConfig {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsGlobalConfig__Class** type_info;
        inline app::fsGlobalConfig__Class* get_class() {
            return il2cpp::get_class<app::fsGlobalConfig__Class>(type_info, "FullSerializer", "fsGlobalConfig");
        }
        inline app::fsGlobalConfig* create() {
            return il2cpp::create_object<app::fsGlobalConfig>(get_class());
        }
    } // namespace fsGlobalConfig
} // namespace app::classes::types
