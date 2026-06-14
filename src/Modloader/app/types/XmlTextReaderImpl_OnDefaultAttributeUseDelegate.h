#pragma once
#include <Modloader/app/structs/XmlTextReaderImpl_OnDefaultAttributeUseDelegate.h>
#include <Modloader/app/structs/XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_OnDefaultAttributeUseDelegate {
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class** type_info() {
            static app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class**)(modloader::win::memory::resolve_rva(0x047015E8));
            }
            return cache;
        }
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class>(type_info(), "System.Xml", "XmlTextReaderImpl", "OnDefaultAttributeUseDelegate");
        }
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate>(get_class());
        }
    } // namespace XmlTextReaderImpl_OnDefaultAttributeUseDelegate
} // namespace app::classes::types
