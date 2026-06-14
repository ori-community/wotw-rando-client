#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_EntityExpandType__Enum.h>
#include <Modloader/app/structs/XmlTextReaderImpl_EntityExpandType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_EntityExpandType__Enum {
        inline app::XmlTextReaderImpl_EntityExpandType__Enum__Class** type_info() {
            static app::XmlTextReaderImpl_EntityExpandType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextReaderImpl_EntityExpandType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_EntityExpandType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_EntityExpandType__Enum__Class>(type_info(), "System.Xml", "XmlTextReaderImpl", "EntityExpandType");
        }
        inline app::XmlTextReaderImpl_EntityExpandType__Enum* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_EntityExpandType__Enum>(get_class());
        }
    } // namespace XmlTextReaderImpl_EntityExpandType__Enum
} // namespace app::classes::types
