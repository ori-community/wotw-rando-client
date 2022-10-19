#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaObject__Array {
        namespace {
            inline app::XmlSchemaObject__Array__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaObject__Array__Class** type_info = &type_info_ref;
        inline app::XmlSchemaObject__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaObject__Array__Class>(type_info, "System.Xml.Schema", "XmlSchemaObject[]");
        }
        inline app::XmlSchemaObject__Array* create() {
            return il2cpp::create_object<app::XmlSchemaObject__Array>(get_class());
        }
    } // namespace XmlSchemaObject__Array
} // namespace app::classes::types
