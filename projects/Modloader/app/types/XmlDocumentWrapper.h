#pragma once
#include <Modloader/app/structs/XmlDocumentWrapper.h>
#include <Modloader/app/structs/XmlDocumentWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDocumentWrapper {
        inline app::XmlDocumentWrapper__Class** type_info() {
            static app::XmlDocumentWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDocumentWrapper__Class**)(modloader::win::memory::resolve_rva(0x04758CC8));
            }
            return cache;
        }
        inline app::XmlDocumentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XmlDocumentWrapper");
        }
        inline app::XmlDocumentWrapper* create() {
            return il2cpp::create_object<app::XmlDocumentWrapper>(get_class());
        }
    } // namespace XmlDocumentWrapper
} // namespace app::classes::types
