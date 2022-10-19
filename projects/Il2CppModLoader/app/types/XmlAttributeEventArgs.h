#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttributeEventArgs {
        inline app::XmlAttributeEventArgs__Class** type_info = (app::XmlAttributeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04709920));
        inline app::XmlAttributeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeEventArgs__Class>(type_info, "System.Xml.Serialization", "XmlAttributeEventArgs");
        }
        inline app::XmlAttributeEventArgs* create() {
            return il2cpp::create_object<app::XmlAttributeEventArgs>(get_class());
        }
    } // namespace XmlAttributeEventArgs
} // namespace app::classes::types
