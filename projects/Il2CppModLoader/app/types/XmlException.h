#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlException {
        inline app::XmlException__Class** type_info = (app::XmlException__Class**)(modloader::win::memory::resolve_rva(0x047513E8));
        inline app::XmlException__Class* get_class() {
            return il2cpp::get_class<app::XmlException__Class>(type_info, "System.Xml", "XmlException");
        }
        inline app::XmlException* create() {
            return il2cpp::create_object<app::XmlException>(get_class());
        }
    } // namespace XmlException
} // namespace app::classes::types
