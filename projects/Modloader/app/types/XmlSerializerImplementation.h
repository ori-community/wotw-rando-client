#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializerImplementation {
        namespace {
            inline app::XmlSerializerImplementation__Class* type_info_ref = nullptr;
        }
        inline app::XmlSerializerImplementation__Class** type_info = &type_info_ref;
        inline app::XmlSerializerImplementation__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerImplementation__Class>(type_info, "System.Xml.Serialization", "XmlSerializerImplementation");
        }
        inline app::XmlSerializerImplementation* create() {
            return il2cpp::create_object<app::XmlSerializerImplementation>(get_class());
        }
    } // namespace XmlSerializerImplementation
} // namespace app::classes::types
