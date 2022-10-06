#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsConfig {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsConfig__Class** type_info;
        inline app::fsConfig__Class* get_class() {
            return il2cpp::get_class<app::fsConfig__Class>(type_info, "FullSerializer", "fsConfig");
        }
        inline app::fsConfig* create() {
            return il2cpp::create_object<app::fsConfig>(get_class());
        }
        inline app::fsConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::fsConfig__Array>(get_class(), size);
        }
        inline app::fsConfig__Array* create_array(const std::vector<app::fsConfig*>& items) {
            return il2cpp::array_new<app::fsConfig__Array>(get_class(), items);
        }
    } // namespace fsConfig
} // namespace app::classes::types
