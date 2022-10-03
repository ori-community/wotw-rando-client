#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypedObject__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypedObject__Array__Class** type_info;
        inline app::TypedObject__Array__Class* get_class() {
            return il2cpp::get_class<app::TypedObject__Array__Class>(type_info, "System.Xml.Schema", "TypedObject[]");
        }
        inline app::TypedObject__Array* create() {
            return il2cpp::create_object<app::TypedObject__Array>(get_class());
        }
    } // namespace TypedObject__Array
} // namespace app::classes::types
