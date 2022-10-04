#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsIAotConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsIAotConverter__Class** type_info;
        inline app::fsIAotConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIAotConverter__Class>(type_info, "FullSerializer", "fsIAotConverter");
        }
        inline app::fsIAotConverter* create() {
            return il2cpp::create_object<app::fsIAotConverter>(get_class());
        }
    } // namespace fsIAotConverter
} // namespace app::classes::types
