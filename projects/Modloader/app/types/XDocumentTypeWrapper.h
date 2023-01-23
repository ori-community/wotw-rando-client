#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XDocumentTypeWrapper__Class.h>
#include <Modloader/app/structs/XDocumentTypeWrapper.h>

namespace app::classes::types {
    namespace XDocumentTypeWrapper {
        inline app::XDocumentTypeWrapper__Class** type_info = (app::XDocumentTypeWrapper__Class**)(modloader::win::memory::resolve_rva(0x04791390));
        inline app::XDocumentTypeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XDocumentTypeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XDocumentTypeWrapper");
        }
        inline app::XDocumentTypeWrapper* create() {
            return il2cpp::create_object<app::XDocumentTypeWrapper>(get_class());
        }
    } // namespace XDocumentTypeWrapper
} // namespace app::classes::types
