#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_short {
        inline app::Datatype_short__Class** type_info = (app::Datatype_short__Class**)(modloader::win::memory::resolve_rva(0x04703690));
        inline app::Datatype_short__Class* get_class() {
            return il2cpp::get_class<app::Datatype_short__Class>(type_info, "System.Xml.Schema", "Datatype_short");
        }
        inline app::Datatype_short* create() {
            return il2cpp::create_object<app::Datatype_short>(get_class());
        }
    } // namespace Datatype_short
} // namespace app::classes::types
