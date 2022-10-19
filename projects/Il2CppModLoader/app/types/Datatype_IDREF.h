#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_IDREF {
        inline app::Datatype_IDREF__Class** type_info = (app::Datatype_IDREF__Class**)(modloader::win::memory::resolve_rva(0x047435C8));
        inline app::Datatype_IDREF__Class* get_class() {
            return il2cpp::get_class<app::Datatype_IDREF__Class>(type_info, "System.Xml.Schema", "Datatype_IDREF");
        }
        inline app::Datatype_IDREF* create() {
            return il2cpp::create_object<app::Datatype_IDREF>(get_class());
        }
    } // namespace Datatype_IDREF
} // namespace app::classes::types
