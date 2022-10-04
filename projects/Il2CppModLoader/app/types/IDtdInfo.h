#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdInfo__Class** type_info;
        inline app::IDtdInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdInfo__Class>(type_info, "System.Xml", "IDtdInfo");
        }
    } // namespace IDtdInfo
} // namespace app::classes::types
