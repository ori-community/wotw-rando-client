#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationGeneratedCode__Class.h>
#include <Modloader/app/structs/XmlSerializationGeneratedCode.h>

namespace app::classes::types {
    namespace XmlSerializationGeneratedCode {
        namespace {
            inline app::XmlSerializationGeneratedCode__Class* type_info_ref = nullptr;
        }
        inline app::XmlSerializationGeneratedCode__Class** type_info = &type_info_ref;
        inline app::XmlSerializationGeneratedCode__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationGeneratedCode__Class>(type_info, "System.Xml.Serialization", "XmlSerializationGeneratedCode");
        }
        inline app::XmlSerializationGeneratedCode* create() {
            return il2cpp::create_object<app::XmlSerializationGeneratedCode>(get_class());
        }
    } // namespace XmlSerializationGeneratedCode
} // namespace app::classes::types
