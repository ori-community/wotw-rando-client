#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_ENUMERATION {
        inline app::Datatype_ENUMERATION__Class** type_info = (app::Datatype_ENUMERATION__Class**)(modloader::win::memory::resolve_rva(0x04711D18));
        inline app::Datatype_ENUMERATION__Class* get_class() {
            return il2cpp::get_class<app::Datatype_ENUMERATION__Class>(type_info, "System.Xml.Schema", "Datatype_ENUMERATION");
        }
        inline app::Datatype_ENUMERATION* create() {
            return il2cpp::create_object<app::Datatype_ENUMERATION>(get_class());
        }
    } // namespace Datatype_ENUMERATION
} // namespace app::classes::types
