#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_LaterInitParam.h>
#include <Modloader/app/structs/XmlTextReaderImpl_LaterInitParam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_LaterInitParam {
        inline app::XmlTextReaderImpl_LaterInitParam__Class** type_info() {
            static app::XmlTextReaderImpl_LaterInitParam__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextReaderImpl_LaterInitParam__Class**)(modloader::win::memory::resolve_rva(0x0473A6D0));
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_LaterInitParam__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_LaterInitParam__Class>(type_info(), "System.Xml", "XmlTextReaderImpl", "LaterInitParam");
        }
        inline app::XmlTextReaderImpl_LaterInitParam* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_LaterInitParam>(get_class());
        }
    } // namespace XmlTextReaderImpl_LaterInitParam
} // namespace app::classes::types
