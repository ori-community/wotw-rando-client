#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsNullableConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsNullableConverter__Class** type_info;
        inline app::fsNullableConverter__Class* get_class() {
            return il2cpp::get_class<app::fsNullableConverter__Class>(type_info, "FullSerializer.Internal", "fsNullableConverter");
        }
        inline app::fsNullableConverter* create() {
            return il2cpp::create_object<app::fsNullableConverter>(get_class());
        }
    } // namespace fsNullableConverter
} // namespace app::classes::types
