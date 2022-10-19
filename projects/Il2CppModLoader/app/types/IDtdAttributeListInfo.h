#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo {
        inline app::IDtdAttributeListInfo__Class** type_info = (app::IDtdAttributeListInfo__Class**)(modloader::win::memory::resolve_rva(0x0473F4D0));
        inline app::IDtdAttributeListInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeListInfo__Class>(type_info, "System.Xml", "IDtdAttributeListInfo");
        }
    } // namespace IDtdAttributeListInfo
} // namespace app::classes::types
