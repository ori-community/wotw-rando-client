#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_ParsingState {
        namespace {
            inline app::XmlTextReaderImpl_ParsingState__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextReaderImpl_ParsingState__Class** type_info = &type_info_ref;
        inline app::XmlTextReaderImpl_ParsingState__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_ParsingState__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "ParsingState");
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
