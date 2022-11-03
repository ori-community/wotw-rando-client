#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_LaterInitParam {
        inline app::XmlTextReaderImpl_LaterInitParam__Class** type_info = (app::XmlTextReaderImpl_LaterInitParam__Class**)(modloader::win::memory::resolve_rva(0x0473A6D0));
        inline app::XmlTextReaderImpl_LaterInitParam__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_LaterInitParam__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "LaterInitParam");
        }
        inline app::XmlTextReaderImpl_LaterInitParam* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_LaterInitParam>(get_class());
        }
    } // namespace XmlTextReaderImpl_LaterInitParam
} // namespace app::classes::types
