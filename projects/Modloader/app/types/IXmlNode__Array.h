#pragma once
#include <Modloader/app/structs/IXmlNode__Array.h>
#include <Modloader/app/structs/IXmlNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlNode__Array {
        inline app::IXmlNode__Array__Class** type_info() {
            static app::IXmlNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IXmlNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IXmlNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IXmlNode__Array__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlNode[]");
        }
        inline app::IXmlNode__Array* create() {
            return il2cpp::create_object<app::IXmlNode__Array>(get_class());
        }
    } // namespace IXmlNode__Array
} // namespace app::classes::types
