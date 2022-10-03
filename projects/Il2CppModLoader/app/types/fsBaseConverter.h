#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsBaseConverter__Class** type_info;
        inline app::fsBaseConverter__Class* get_class() {
            return il2cpp::get_class<app::fsBaseConverter__Class>(type_info, "FullSerializer", "fsBaseConverter");
        }
        inline app::fsBaseConverter* create() {
            return il2cpp::create_object<app::fsBaseConverter>(get_class());
        }
        inline app::fsBaseConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::fsBaseConverter__Array>(get_class(), size);
        }
    } // namespace fsBaseConverter
} // namespace app::classes::types
