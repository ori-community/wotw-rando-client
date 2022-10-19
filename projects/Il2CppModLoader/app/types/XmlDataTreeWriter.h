#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDataTreeWriter {
        inline app::XmlDataTreeWriter__Class** type_info = (app::XmlDataTreeWriter__Class**)(modloader::win::memory::resolve_rva(0x047262C8));
        inline app::XmlDataTreeWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlDataTreeWriter__Class>(type_info, "System.Data", "XmlDataTreeWriter");
        }
        inline app::XmlDataTreeWriter* create() {
            return il2cpp::create_object<app::XmlDataTreeWriter>(get_class());
        }
    } // namespace XmlDataTreeWriter
} // namespace app::classes::types
