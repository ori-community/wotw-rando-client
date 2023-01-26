#pragma once
#include <Modloader/app/structs/XmlSchemaInference.h>
#include <Modloader/app/structs/XmlSchemaInference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInference {
        inline app::XmlSchemaInference__Class** type_info() {
            static app::XmlSchemaInference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaInference__Class**)(modloader::win::memory::resolve_rva(0x04714ED0));
            }
            return cache;
        }
        inline app::XmlSchemaInference__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInference__Class>(type_info(), "System.Xml.Schema", "XmlSchemaInference");
        }
        inline app::XmlSchemaInference* create() {
            return il2cpp::create_object<app::XmlSchemaInference>(get_class());
        }
    } // namespace XmlSchemaInference
} // namespace app::classes::types
