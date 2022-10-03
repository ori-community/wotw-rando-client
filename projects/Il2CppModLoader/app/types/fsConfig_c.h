#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsConfig_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsConfig_c__Class** type_info;
        inline app::fsConfig_c__Class* get_class() {
            return il2cpp::get_nested_class<app::fsConfig_c__Class>(type_info, "FullSerializer", "fsConfig", "<>c");
        }
        inline app::fsConfig_c* create() {
            return il2cpp::create_object<app::fsConfig_c>(get_class());
        }
    } // namespace fsConfig_c
} // namespace app::classes::types
