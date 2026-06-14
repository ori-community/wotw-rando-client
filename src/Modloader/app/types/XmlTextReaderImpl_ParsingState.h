#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState__Array.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState__Boxed.h>
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_ParsingState {
        inline app::XmlTextReaderImpl_ParsingState__Class** type_info() {
            static app::XmlTextReaderImpl_ParsingState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextReaderImpl_ParsingState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_ParsingState__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_ParsingState__Class>(type_info(), "System.Xml", "XmlTextReaderImpl", "ParsingState");
        }
        inline app::XmlTextReaderImpl_ParsingState* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_ParsingState>(get_class());
        }
        inline app::XmlTextReaderImpl_ParsingState__Boxed* box(app::XmlTextReaderImpl_ParsingState value) {
            return il2cpp::box_value<app::XmlTextReaderImpl_ParsingState__Boxed>(get_class(), value);
        }
        inline app::XmlTextReaderImpl_ParsingState__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextReaderImpl_ParsingState__Array>(get_class(), size);
        }
        inline app::XmlTextReaderImpl_ParsingState__Array* create_array(const std::vector<app::XmlTextReaderImpl_ParsingState>& items) {
            return il2cpp::array_new<app::XmlTextReaderImpl_ParsingState__Array>(get_class(), items);
        }
    } // namespace XmlTextReaderImpl_ParsingState
} // namespace app::classes::types
