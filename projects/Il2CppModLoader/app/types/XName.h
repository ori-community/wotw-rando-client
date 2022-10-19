#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XName {
        inline app::XName__Class** type_info = (app::XName__Class**)(modloader::win::memory::resolve_rva(0x04775B78));
        inline app::XName__Class* get_class() {
            return il2cpp::get_class<app::XName__Class>(type_info, "System.Xml.Linq", "XName");
        }
        inline app::XName* create() {
            return il2cpp::create_object<app::XName>(get_class());
        }
    } // namespace XName
} // namespace app::classes::types
