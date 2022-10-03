#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsIEnumerableConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsIEnumerableConverter__Class** type_info;
        inline app::fsIEnumerableConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIEnumerableConverter__Class>(type_info, "FullSerializer.Internal", "fsIEnumerableConverter");
        }
        inline app::fsIEnumerableConverter* create() {
            return il2cpp::create_object<app::fsIEnumerableConverter>(get_class());
        }
    } // namespace fsIEnumerableConverter
} // namespace app::classes::types
