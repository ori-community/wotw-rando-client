#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_QName {
        inline app::Datatype_QName__Class** type_info = (app::Datatype_QName__Class**)(modloader::win::memory::resolve_rva(0x04768D18));
        inline app::Datatype_QName__Class* get_class() {
            return il2cpp::get_class<app::Datatype_QName__Class>(type_info, "System.Xml.Schema", "Datatype_QName");
        }
        inline app::Datatype_QName* create() {
            return il2cpp::create_object<app::Datatype_QName>(get_class());
        }
    } // namespace Datatype_QName
} // namespace app::classes::types
