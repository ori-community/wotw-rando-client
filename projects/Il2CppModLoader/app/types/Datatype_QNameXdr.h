#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_QNameXdr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_QNameXdr__Class** type_info;
        inline app::Datatype_QNameXdr__Class* get_class() {
            return il2cpp::get_class<app::Datatype_QNameXdr__Class>(type_info, "System.Xml.Schema", "Datatype_QNameXdr");
        }
        inline app::Datatype_QNameXdr* create() {
            return il2cpp::create_object<app::Datatype_QNameXdr>(get_class());
        }
    } // namespace Datatype_QNameXdr
} // namespace app::classes::types
