#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_anyURI {
        inline app::Datatype_anyURI__Class** type_info = (app::Datatype_anyURI__Class**)(modloader::win::memory::resolve_rva(0x04722098));
        inline app::Datatype_anyURI__Class* get_class() {
            return il2cpp::get_class<app::Datatype_anyURI__Class>(type_info, "System.Xml.Schema", "Datatype_anyURI");
        }
        inline app::Datatype_anyURI* create() {
            return il2cpp::create_object<app::Datatype_anyURI>(get_class());
        }
    } // namespace Datatype_anyURI
} // namespace app::classes::types
