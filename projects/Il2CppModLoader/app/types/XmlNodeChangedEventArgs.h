#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeChangedEventArgs {
        inline app::XmlNodeChangedEventArgs__Class** type_info = (app::XmlNodeChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047166F0));
        inline app::XmlNodeChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedEventArgs__Class>(type_info, "System.Xml", "XmlNodeChangedEventArgs");
        }
        inline app::XmlNodeChangedEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeChangedEventArgs>(get_class());
        }
    } // namespace XmlNodeChangedEventArgs
} // namespace app::classes::types
