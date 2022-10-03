#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_List {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_List__Class** type_info;
        inline app::Datatype_List__Class* get_class() {
            return il2cpp::get_class<app::Datatype_List__Class>(type_info, "System.Xml.Schema", "Datatype_List");
        }
        inline app::Datatype_List* create() {
            return il2cpp::create_object<app::Datatype_List>(get_class());
        }
    } // namespace Datatype_List
} // namespace app::classes::types
