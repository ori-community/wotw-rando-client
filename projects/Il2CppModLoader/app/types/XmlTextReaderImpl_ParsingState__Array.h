#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_ParsingState__Array {
        inline app::XmlTextReaderImpl_ParsingState__Array__Class** type_info = (app::XmlTextReaderImpl_ParsingState__Array__Class**)(modloader::win::memory::resolve_rva(0x04714B18));
        inline app::XmlTextReaderImpl_ParsingState__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl_ParsingState__Array__Class>(type_info, "System.Xml", "XmlTextReaderImpl+ParsingState[]");
        }
        inline app::XmlTextReaderImpl_ParsingState__Array* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_ParsingState__Array>(get_class());
        }
    } // namespace XmlTextReaderImpl_ParsingState__Array
} // namespace app::classes::types
