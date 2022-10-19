#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaInferenceException {
        inline app::XmlSchemaInferenceException__Class** type_info = (app::XmlSchemaInferenceException__Class**)(modloader::win::memory::resolve_rva(0x047816C0));
        inline app::XmlSchemaInferenceException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInferenceException__Class>(type_info, "System.Xml.Schema", "XmlSchemaInferenceException");
        }
        inline app::XmlSchemaInferenceException* create() {
            return il2cpp::create_object<app::XmlSchemaInferenceException>(get_class());
        }
    } // namespace XmlSchemaInferenceException
} // namespace app::classes::types
