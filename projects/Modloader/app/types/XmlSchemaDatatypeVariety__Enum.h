#pragma once
#include <Modloader/app/structs/XmlSchemaDatatypeVariety__Enum.h>
#include <Modloader/app/structs/XmlSchemaDatatypeVariety__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaDatatypeVariety__Enum {
        inline app::XmlSchemaDatatypeVariety__Enum__Class** type_info() {
            static app::XmlSchemaDatatypeVariety__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaDatatypeVariety__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaDatatypeVariety__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaDatatypeVariety__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaDatatypeVariety");
        }
        inline app::XmlSchemaDatatypeVariety__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaDatatypeVariety__Enum>(get_class());
        }
    } // namespace XmlSchemaDatatypeVariety__Enum
} // namespace app::classes::types
