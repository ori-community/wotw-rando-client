#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlChildEnumerator {
        inline app::XmlChildEnumerator__Class** type_info = (app::XmlChildEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04757928));
        inline app::XmlChildEnumerator__Class* get_class() {
            return il2cpp::get_class<app::XmlChildEnumerator__Class>(type_info, "System.Xml", "XmlChildEnumerator");
        }
        inline app::XmlChildEnumerator* create() {
            return il2cpp::create_object<app::XmlChildEnumerator>(get_class());
        }
    } // namespace XmlChildEnumerator
} // namespace app::classes::types
