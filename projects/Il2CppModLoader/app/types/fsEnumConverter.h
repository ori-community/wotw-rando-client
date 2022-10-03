#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsEnumConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsEnumConverter__Class** type_info;
        inline app::fsEnumConverter__Class* get_class() {
            return il2cpp::get_class<app::fsEnumConverter__Class>(type_info, "FullSerializer.Internal", "fsEnumConverter");
        }
        inline app::fsEnumConverter* create() {
            return il2cpp::create_object<app::fsEnumConverter>(get_class());
        }
    } // namespace fsEnumConverter
} // namespace app::classes::types
