#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CachedReflectionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CachedReflectionInfo__Class** type_info;
        inline app::CachedReflectionInfo__Class* get_class() {
            return il2cpp::get_class<app::CachedReflectionInfo__Class>(type_info, "System.Linq.Expressions", "CachedReflectionInfo");
        }
        inline app::CachedReflectionInfo* create() {
            return il2cpp::create_object<app::CachedReflectionInfo>(get_class());
        }
    } // namespace CachedReflectionInfo
} // namespace app::classes::types
