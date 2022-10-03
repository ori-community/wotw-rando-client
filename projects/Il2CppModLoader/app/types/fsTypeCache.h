#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsTypeCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsTypeCache__Class** type_info;
        inline app::fsTypeCache__Class* get_class() {
            return il2cpp::get_class<app::fsTypeCache__Class>(type_info, "FullSerializer.Internal", "fsTypeCache");
        }
        inline app::fsTypeCache* create() {
            return il2cpp::create_object<app::fsTypeCache>(get_class());
        }
    } // namespace fsTypeCache
} // namespace app::classes::types
