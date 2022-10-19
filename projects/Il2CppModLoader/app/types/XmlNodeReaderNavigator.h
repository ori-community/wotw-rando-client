#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator {
        inline app::XmlNodeReaderNavigator__Class** type_info = (app::XmlNodeReaderNavigator__Class**)(modloader::win::memory::resolve_rva(0x04712BD0));
        inline app::XmlNodeReaderNavigator__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReaderNavigator__Class>(type_info, "System.Xml", "XmlNodeReaderNavigator");
        }
        inline app::XmlNodeReaderNavigator* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator>(get_class());
        }
    } // namespace XmlNodeReaderNavigator
} // namespace app::classes::types
