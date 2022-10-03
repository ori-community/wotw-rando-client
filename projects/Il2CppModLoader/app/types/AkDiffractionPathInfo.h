#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDiffractionPathInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkDiffractionPathInfo__Class** type_info;
        inline app::AkDiffractionPathInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionPathInfo__Class>(type_info, "", "AkDiffractionPathInfo");
        }
        inline app::AkDiffractionPathInfo* create() {
            return il2cpp::create_object<app::AkDiffractionPathInfo>(get_class());
        }
    } // namespace AkDiffractionPathInfo
} // namespace app::classes::types
