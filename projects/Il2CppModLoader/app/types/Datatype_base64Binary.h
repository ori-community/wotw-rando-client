#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_base64Binary {
        inline app::Datatype_base64Binary__Class** type_info = (app::Datatype_base64Binary__Class**)(modloader::win::memory::resolve_rva(0x04736CC8));
        inline app::Datatype_base64Binary__Class* get_class() {
            return il2cpp::get_class<app::Datatype_base64Binary__Class>(type_info, "System.Xml.Schema", "Datatype_base64Binary");
        }
        inline app::Datatype_base64Binary* create() {
            return il2cpp::create_object<app::Datatype_base64Binary>(get_class());
        }
    } // namespace Datatype_base64Binary
} // namespace app::classes::types
