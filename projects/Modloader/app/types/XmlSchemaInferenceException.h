#pragma once
#include <Modloader/app/structs/XmlSchemaInferenceException.h>
#include <Modloader/app/structs/XmlSchemaInferenceException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInferenceException {
        inline app::XmlSchemaInferenceException__Class** type_info() {
            static app::XmlSchemaInferenceException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaInferenceException__Class**)(modloader::win::memory::resolve_rva(0x047816C0));
            }
            return cache;
        }
        inline app::XmlSchemaInferenceException__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaInferenceException__Class>(type_info(), "System.Xml.Schema", "XmlSchemaInferenceException");
        }
        inline app::XmlSchemaInferenceException* create() {
            return il2cpp::create_object<app::XmlSchemaInferenceException>(get_class());
        }
    } // namespace XmlSchemaInferenceException
} // namespace app::classes::types
