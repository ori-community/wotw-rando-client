#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsGuidConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsGuidConverter__Class** type_info;
        inline app::fsGuidConverter__Class* get_class() {
            return il2cpp::get_class<app::fsGuidConverter__Class>(type_info, "FullSerializer.Internal", "fsGuidConverter");
        }
        inline app::fsGuidConverter* create() {
            return il2cpp::create_object<app::fsGuidConverter>(get_class());
        }
    } // namespace fsGuidConverter
} // namespace app::classes::types
