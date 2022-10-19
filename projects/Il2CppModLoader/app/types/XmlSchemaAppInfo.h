#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaAppInfo {
        inline app::XmlSchemaAppInfo__Class** type_info = (app::XmlSchemaAppInfo__Class**)(modloader::win::memory::resolve_rva(0x04753228));
        inline app::XmlSchemaAppInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAppInfo__Class>(type_info, "System.Xml.Schema", "XmlSchemaAppInfo");
        }
        inline app::XmlSchemaAppInfo* create() {
            return il2cpp::create_object<app::XmlSchemaAppInfo>(get_class());
        }
    } // namespace XmlSchemaAppInfo
} // namespace app::classes::types
