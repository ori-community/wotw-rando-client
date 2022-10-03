#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_floatXdr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_floatXdr__Class** type_info;
        inline app::Datatype_floatXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_floatXdr__Class>(type_info, "System.Xml.Schema", "Datatype_floatXdr");
        }
        inline app::Datatype_floatXdr* create() {
            return il2cpp::create_object<app::Datatype_floatXdr>(get_class());
        }
    } // namespace Datatype_floatXdr
} // namespace app::classes::types
