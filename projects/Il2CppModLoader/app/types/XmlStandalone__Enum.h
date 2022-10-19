#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlStandalone__Enum {
        inline app::XmlStandalone__Enum__Class** type_info = (app::XmlStandalone__Enum__Class**)(modloader::win::memory::resolve_rva(0x04770380));
        inline app::XmlStandalone__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlStandalone__Enum__Class>(type_info, "System.Xml", "XmlStandalone");
        }
        inline app::XmlStandalone__Enum* create() {
            return il2cpp::create_object<app::XmlStandalone__Enum>(get_class());
        }
    } // namespace XmlStandalone__Enum
} // namespace app::classes::types
