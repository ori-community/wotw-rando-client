#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostCacheIds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPostCacheIds__Class** type_info;
        inline app::UberPostCacheIds__Class* get_class() {
            return il2cpp::get_class<app::UberPostCacheIds__Class>(type_info, "", "UberPostCacheIds");
        }
        inline app::UberPostCacheIds* create() {
            return il2cpp::create_object<app::UberPostCacheIds>(get_class());
        }
    } // namespace UberPostCacheIds
} // namespace app::classes::types
