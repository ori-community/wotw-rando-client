#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsArrayConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsArrayConverter__Class** type_info;
        inline app::fsArrayConverter__Class* get_class() {
            return il2cpp::get_class<app::fsArrayConverter__Class>(type_info, "FullSerializer.Internal", "fsArrayConverter");
        }
        inline app::fsArrayConverter* create() {
            return il2cpp::create_object<app::fsArrayConverter>(get_class());
        }
    } // namespace fsArrayConverter
} // namespace app::classes::types
