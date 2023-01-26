#pragma once
#include <Modloader/app/structs/XmlValidatingReaderImpl_ValidationEventHandling.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl_ValidationEventHandling__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl_ValidationEventHandling {
        inline app::XmlValidatingReaderImpl_ValidationEventHandling__Class** type_info() {
            static app::XmlValidatingReaderImpl_ValidationEventHandling__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlValidatingReaderImpl_ValidationEventHandling__Class**)(modloader::win::memory::resolve_rva(0x0476FFB8));
            }
            return cache;
        }
        inline app::XmlValidatingReaderImpl_ValidationEventHandling__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlValidatingReaderImpl_ValidationEventHandling__Class>(type_info(), "System.Xml", "XmlValidatingReaderImpl", "ValidationEventHandling");
        }
        inline app::XmlValidatingReaderImpl_ValidationEventHandling* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl_ValidationEventHandling>(get_class());
        }
    } // namespace XmlValidatingReaderImpl_ValidationEventHandling
} // namespace app::classes::types
