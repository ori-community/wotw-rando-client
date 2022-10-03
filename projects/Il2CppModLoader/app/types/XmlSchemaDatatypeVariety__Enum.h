#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaDatatypeVariety__Enum {
        namespace {
            app::XmlSchemaDatatypeVariety__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSchemaDatatypeVariety__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaDatatypeVariety__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDatatypeVariety__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaDatatypeVariety");
        }
        inline app::XmlSchemaDatatypeVariety__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaDatatypeVariety__Enum>(get_class());
        }
    } // namespace XmlSchemaDatatypeVariety__Enum
} // namespace app::classes::types
