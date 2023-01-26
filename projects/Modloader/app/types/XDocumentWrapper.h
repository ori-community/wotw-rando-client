#pragma once
#include <Modloader/app/structs/XDocumentWrapper.h>
#include <Modloader/app/structs/XDocumentWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XDocumentWrapper {
        inline app::XDocumentWrapper__Class** type_info() {
            static app::XDocumentWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XDocumentWrapper__Class**)(modloader::win::memory::resolve_rva(0x047507D8));
            }
            return cache;
        }
        inline app::XDocumentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDocumentWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XDocumentWrapper");
        }
        inline app::XDocumentWrapper* create() {
            return il2cpp::create_object<app::XDocumentWrapper>(get_class());
        }
    } // namespace XDocumentWrapper
} // namespace app::classes::types
