#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XDeclaration {
        inline app::XDeclaration__Class** type_info = (app::XDeclaration__Class**)(modloader::win::memory::resolve_rva(0x047943C0));
        inline app::XDeclaration__Class* get_class() {
            return il2cpp::get_class<app::XDeclaration__Class>(type_info, "System.Xml.Linq", "XDeclaration");
        }
        inline app::XDeclaration* create() {
            return il2cpp::create_object<app::XDeclaration>(get_class());
        }
    } // namespace XDeclaration
} // namespace app::classes::types
