#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequest_DesignerWebRequestCreate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebRequest_DesignerWebRequestCreate__Class** type_info;
        inline app::WebRequest_DesignerWebRequestCreate__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_DesignerWebRequestCreate__Class>(type_info, "System.Net", "WebRequest", "DesignerWebRequestCreate");
        }
        inline app::WebRequest_DesignerWebRequestCreate* create() {
            return il2cpp::create_object<app::WebRequest_DesignerWebRequestCreate>(get_class());
        }
    } // namespace WebRequest_DesignerWebRequestCreate
} // namespace app::classes::types
