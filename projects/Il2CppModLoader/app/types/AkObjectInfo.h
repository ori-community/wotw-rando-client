#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkObjectInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkObjectInfo__Class** type_info;
        inline app::AkObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::AkObjectInfo__Class>(type_info, "", "AkObjectInfo");
        }
        inline app::AkObjectInfo* create() {
            return il2cpp::create_object<app::AkObjectInfo>(get_class());
        }
    } // namespace AkObjectInfo
} // namespace app::classes::types
