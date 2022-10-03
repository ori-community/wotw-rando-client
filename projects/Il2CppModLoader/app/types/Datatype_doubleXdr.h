#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_doubleXdr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_doubleXdr__Class** type_info;
        inline app::Datatype_doubleXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_doubleXdr__Class>(type_info, "System.Xml.Schema", "Datatype_doubleXdr");
        }
        inline app::Datatype_doubleXdr* create() {
            return il2cpp::create_object<app::Datatype_doubleXdr>(get_class());
        }
    } // namespace Datatype_doubleXdr
} // namespace app::classes::types
