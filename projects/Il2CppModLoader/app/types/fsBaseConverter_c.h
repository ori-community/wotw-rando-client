#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsBaseConverter_c__Class** type_info;
        inline app::fsBaseConverter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::fsBaseConverter_c__Class>(type_info, "FullSerializer", "fsBaseConverter", "<>c");
        }
        inline app::fsBaseConverter_c* create() {
            return il2cpp::create_object<app::fsBaseConverter_c>(get_class());
        }
    } // namespace fsBaseConverter_c
} // namespace app::classes::types
