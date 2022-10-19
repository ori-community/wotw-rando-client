#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_token {
        inline app::Datatype_token__Class** type_info = (app::Datatype_token__Class**)(modloader::win::memory::resolve_rva(0x0475CF78));
        inline app::Datatype_token__Class* get_class() {
            return il2cpp::get_class<app::Datatype_token__Class>(type_info, "System.Xml.Schema", "Datatype_token");
        }
        inline app::Datatype_token* create() {
            return il2cpp::create_object<app::Datatype_token>(get_class());
        }
    } // namespace Datatype_token
} // namespace app::classes::types
