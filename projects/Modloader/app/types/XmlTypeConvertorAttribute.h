#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTypeConvertorAttribute__Class.h>
#include <Modloader/app/structs/XmlTypeConvertorAttribute.h>

namespace app::classes::types {
    namespace XmlTypeConvertorAttribute {
        namespace {
            inline app::XmlTypeConvertorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::XmlTypeConvertorAttribute__Class** type_info = &type_info_ref;
        inline app::XmlTypeConvertorAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeConvertorAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTypeConvertorAttribute");
        }
        inline app::XmlTypeConvertorAttribute* create() {
            return il2cpp::create_object<app::XmlTypeConvertorAttribute>(get_class());
        }
    } // namespace XmlTypeConvertorAttribute
} // namespace app::classes::types
