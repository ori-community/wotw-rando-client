#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Array.h>
#include <Modloader/app/structs/XmlTextReaderImpl_NodeData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NodeData__Array {
        inline app::XmlTextReaderImpl_NodeData__Array__Class** type_info() {
            static app::XmlTextReaderImpl_NodeData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextReaderImpl_NodeData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A4F0));
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_NodeData__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl_NodeData__Array__Class>(type_info(), "System.Xml", "XmlTextReaderImpl+NodeData[]");
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NodeData__Array>(get_class());
        }
    } // namespace XmlTextReaderImpl_NodeData__Array
} // namespace app::classes::types
