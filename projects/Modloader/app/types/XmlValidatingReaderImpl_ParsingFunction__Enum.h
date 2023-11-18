#pragma once
#include <Modloader/app/structs/XmlValidatingReaderImpl_ParsingFunction__Enum.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl_ParsingFunction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl_ParsingFunction__Enum {
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class** type_info() {
            static app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlValidatingReaderImpl_ParsingFunction__Enum__Class>(type_info(), "System.Xml", "XmlValidatingReaderImpl", "ParsingFunction");
        }
        inline app::XmlValidatingReaderImpl_ParsingFunction__Enum* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl_ParsingFunction__Enum>(get_class());
        }
    } // namespace XmlValidatingReaderImpl_ParsingFunction__Enum
} // namespace app::classes::types
