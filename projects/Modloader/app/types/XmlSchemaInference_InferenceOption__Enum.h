#pragma once
#include <Modloader/app/structs/XmlSchemaInference_InferenceOption__Enum.h>
#include <Modloader/app/structs/XmlSchemaInference_InferenceOption__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaInference_InferenceOption__Enum {
        inline app::XmlSchemaInference_InferenceOption__Enum__Class** type_info() {
            static app::XmlSchemaInference_InferenceOption__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaInference_InferenceOption__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaInference_InferenceOption__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSchemaInference_InferenceOption__Enum__Class>(type_info(), "System.Xml.Schema", "XmlSchemaInference", "InferenceOption");
        }
        inline app::XmlSchemaInference_InferenceOption__Enum* create() {
            return il2cpp::create_object<app::XmlSchemaInference_InferenceOption__Enum>(get_class());
        }
    } // namespace XmlSchemaInference_InferenceOption__Enum
} // namespace app::classes::types
