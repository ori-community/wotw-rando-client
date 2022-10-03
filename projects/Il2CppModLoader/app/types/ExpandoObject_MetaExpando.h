#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoObject_MetaExpando {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoObject_MetaExpando__Class** type_info;
        inline app::ExpandoObject_MetaExpando__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_MetaExpando__Class>(type_info, "System.Dynamic", "ExpandoObject", "MetaExpando");
        }
        inline app::ExpandoObject_MetaExpando* create() {
            return il2cpp::create_object<app::ExpandoObject_MetaExpando>(get_class());
        }
    } // namespace ExpandoObject_MetaExpando
} // namespace app::classes::types
