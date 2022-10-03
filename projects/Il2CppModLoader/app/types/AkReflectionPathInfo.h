#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkReflectionPathInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkReflectionPathInfo__Class** type_info;
        inline app::AkReflectionPathInfo__Class* get_class() {
            return il2cpp::get_class<app::AkReflectionPathInfo__Class>(type_info, "", "AkReflectionPathInfo");
        }
        inline app::AkReflectionPathInfo* create() {
            return il2cpp::create_object<app::AkReflectionPathInfo>(get_class());
        }
    } // namespace AkReflectionPathInfo
} // namespace app::classes::types
