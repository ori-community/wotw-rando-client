#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_ParsingMode__Enum {
        namespace {
            inline app::XmlTextReaderImpl_ParsingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextReaderImpl_ParsingMode__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextReaderImpl_ParsingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_ParsingMode__Enum__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "ParsingMode");
        }
        inline app::XmlTextReaderImpl_ParsingMode__Enum* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_ParsingMode__Enum>(get_class());
        }
    } // namespace XmlTextReaderImpl_ParsingMode__Enum
} // namespace app::classes::types
