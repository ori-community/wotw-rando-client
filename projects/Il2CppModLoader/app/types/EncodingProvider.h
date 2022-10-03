#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncodingProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncodingProvider__Class** type_info;
        inline app::EncodingProvider__Class* get_class() {
            return il2cpp::get_class<app::EncodingProvider__Class>(type_info, "System.Text", "EncodingProvider");
        }
        inline app::EncodingProvider* create() {
            return il2cpp::create_object<app::EncodingProvider>(get_class());
        }
        inline app::EncodingProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::EncodingProvider__Array>(get_class(), size);
        }
    } // namespace EncodingProvider
} // namespace app::classes::types
