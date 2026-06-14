#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#include <Modloader/app/structs/XmlTextReaderImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl {
        inline app::XmlTextReaderImpl__Class** type_info() {
            static app::XmlTextReaderImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x04759D28));
            }
            return cache;
        }
        inline app::XmlTextReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl__Class>(type_info(), "System.Xml", "XmlTextReaderImpl");
        }
        inline app::XmlTextReaderImpl* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl>(get_class());
        }
    } // namespace XmlTextReaderImpl
} // namespace app::classes::types
