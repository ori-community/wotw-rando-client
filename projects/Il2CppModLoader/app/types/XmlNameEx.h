#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNameEx {
        inline app::XmlNameEx__Class** type_info = (app::XmlNameEx__Class**)(modloader::win::memory::resolve_rva(0x0474B7D0));
        inline app::XmlNameEx__Class* get_class() {
            return il2cpp::get_class<app::XmlNameEx__Class>(type_info, "System.Xml", "XmlNameEx");
        }
        inline app::XmlNameEx* create() {
            return il2cpp::create_object<app::XmlNameEx>(get_class());
        }
    } // namespace XmlNameEx
} // namespace app::classes::types
