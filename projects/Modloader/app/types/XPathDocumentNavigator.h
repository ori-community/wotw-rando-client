#pragma once
#include <Modloader/app/structs/XPathDocumentNavigator.h>
#include <Modloader/app/structs/XPathDocumentNavigator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathDocumentNavigator {
        inline app::XPathDocumentNavigator__Class** type_info() {
            static app::XPathDocumentNavigator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathDocumentNavigator__Class**)(modloader::win::memory::resolve_rva(0x0476DE90));
            }
            return cache;
        }
        inline app::XPathDocumentNavigator__Class* get_class() {
            return il2cpp::get_class<app::XPathDocumentNavigator__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
        }
        inline app::XPathDocumentNavigator* create() {
            return il2cpp::create_object<app::XPathDocumentNavigator>(get_class());
        }
    } // namespace XPathDocumentNavigator
} // namespace app::classes::types
