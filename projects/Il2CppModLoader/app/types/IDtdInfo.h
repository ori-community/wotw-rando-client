#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdInfo {
        inline app::IDtdInfo__Class** type_info = (app::IDtdInfo__Class**)(modloader::win::memory::resolve_rva(0x047991B0));
        inline app::IDtdInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdInfo__Class>(type_info, "System.Xml", "IDtdInfo");
        }
    } // namespace IDtdInfo
} // namespace app::classes::types
