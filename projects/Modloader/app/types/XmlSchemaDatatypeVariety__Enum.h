#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaDatatypeVariety__Enum {
        namespace {
            inline app::XmlSchemaDatatypeVariety__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlSchemaDatatypeVariety__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSchemaDatatypeVariety__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDatatypeVariety__Enum__Class>(type_info, "System.Xml.Schema", "XmlSchemaDatatypeVariety");
        }
        inline app::XmlSchemaDatatypeVariety__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaDatatypeVariety__Enum>(get_class());
        }
    } // namespace XmlSchemaDatatypeVariety__Enum
} // namespace app::classes::types
