#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegionInfo {
        inline app::RegionInfo__Class** type_info = (app::RegionInfo__Class**)(modloader::win::memory::resolve_rva(0x0471BF00));
        inline app::RegionInfo__Class* get_class() {
            return il2cpp::get_class<app::RegionInfo__Class>(type_info, "System.Globalization", "RegionInfo");
        }
        inline app::RegionInfo* create() {
            return il2cpp::create_object<app::RegionInfo>(get_class());
        }
    } // namespace RegionInfo
} // namespace app::classes::types
