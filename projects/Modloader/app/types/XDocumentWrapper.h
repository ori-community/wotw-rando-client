#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XDocumentWrapper {
        inline app::XDocumentWrapper__Class** type_info = (app::XDocumentWrapper__Class**)(modloader::win::memory::resolve_rva(0x047507D8));
        inline app::XDocumentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDocumentWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDocumentWrapper");
        }
        inline app::XDocumentWrapper* create() {
            return il2cpp::create_object<app::XDocumentWrapper>(get_class());
        }
    } // namespace XDocumentWrapper
} // namespace app::classes::types
