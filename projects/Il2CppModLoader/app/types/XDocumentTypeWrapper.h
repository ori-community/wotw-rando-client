#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
