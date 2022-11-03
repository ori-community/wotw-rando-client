#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl_ParsingFunction__Enum {
        namespace {
            inline app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class** type_info = &type_info_ref;
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class>(type_info, "System.Xml", "XmlValidatingReaderImpl", "ParsingFunction");
        }
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl_ParsingFunction__Enum>(get_class());
        }
    } // namespace XmlValidatingReaderImpl_ParsingFunction__Enum
} // namespace app::classes::types
