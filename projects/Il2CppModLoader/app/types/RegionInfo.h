#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegionInfo__Class** type_info;
        inline app::RegionInfo__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo__Class>(type_info, "System.Globalization", "RegionInfo");
        }
        inline app::RegionInfo* create() {
            return il2cpp::create_object<app::RegionInfo>(get_class());
        }
    } // namespace RegionInfo
} // namespace app::classes::types
