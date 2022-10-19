#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlConvert {
        inline app::XmlConvert__Class** type_info = (app::XmlConvert__Class**)(modloader::win::memory::resolve_rva(0x04740AE0));
        inline app::XmlConvert__Class* get_class() {
            return il2cpp::get_class<app::XmlConvert__Class>(type_info, "System.Xml", "XmlConvert");
        }
        inline app::XmlConvert* create() {
            return il2cpp::create_object<app::XmlConvert>(get_class());
        }
    } // namespace XmlConvert
} // namespace app::classes::types
