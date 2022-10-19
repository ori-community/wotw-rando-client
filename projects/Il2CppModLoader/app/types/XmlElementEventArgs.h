#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlElementEventArgs {
        inline app::XmlElementEventArgs__Class** type_info = (app::XmlElementEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04765740));
        inline app::XmlElementEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventArgs__Class>(type_info, "System.Xml.Serialization", "XmlElementEventArgs");
        }
        inline app::XmlElementEventArgs* create() {
            return il2cpp::create_object<app::XmlElementEventArgs>(get_class());
        }
    } // namespace XmlElementEventArgs
} // namespace app::classes::types
