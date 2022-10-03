#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncodingHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncodingHelper__Class** type_info;
        inline app::EncodingHelper__Class* get_class() {
            return il2cpp::get_class<app::EncodingHelper__Class>(type_info, "System.Text", "EncodingHelper");
        }
        inline app::EncodingHelper* create() {
            return il2cpp::create_object<app::EncodingHelper>(get_class());
        }
    } // namespace EncodingHelper
} // namespace app::classes::types
