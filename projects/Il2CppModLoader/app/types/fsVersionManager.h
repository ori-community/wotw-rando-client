#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsVersionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsVersionManager__Class** type_info;
        inline app::fsVersionManager__Class* get_class() {
            return il2cpp::get_class<app::fsVersionManager__Class>(type_info, "FullSerializer.Internal", "fsVersionManager");
        }
        inline app::fsVersionManager* create() {
            return il2cpp::create_object<app::fsVersionManager>(get_class());
        }
    } // namespace fsVersionManager
} // namespace app::classes::types
