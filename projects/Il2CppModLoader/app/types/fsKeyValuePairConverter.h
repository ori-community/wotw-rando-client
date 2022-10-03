#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsKeyValuePairConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsKeyValuePairConverter__Class** type_info;
        inline app::fsKeyValuePairConverter__Class* get_class() {
            return il2cpp::get_class<app::fsKeyValuePairConverter__Class>(type_info, "FullSerializer.Internal", "fsKeyValuePairConverter");
        }
        inline app::fsKeyValuePairConverter* create() {
            return il2cpp::create_object<app::fsKeyValuePairConverter>(get_class());
        }
    } // namespace fsKeyValuePairConverter
} // namespace app::classes::types
