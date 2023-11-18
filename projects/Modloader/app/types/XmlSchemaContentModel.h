#pragma once
#include <Modloader/app/structs/XmlSchemaContentModel.h>
#include <Modloader/app/structs/XmlSchemaContentModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaContentModel {
        inline app::XmlSchemaContentModel__Class** type_info() {
            static app::XmlSchemaContentModel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSchemaContentModel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSchemaContentModel__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaContentModel__Class>(type_info(), "System.Xml.Schema", "XmlSchemaContentModel");
        }
        inline app::XmlSchemaContentModel* create() {
            return il2cpp::create_object<app::XmlSchemaContentModel>(get_class());
        }
    } // namespace XmlSchemaContentModel
} // namespace app::classes::types
