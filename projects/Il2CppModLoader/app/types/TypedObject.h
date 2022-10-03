#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypedObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypedObject__Class** type_info;
        inline app::TypedObject__Class* get_class() {
            return il2cpp::get_class<app::TypedObject__Class>(type_info, "System.Xml.Schema", "TypedObject");
        }
        inline app::TypedObject* create() {
            return il2cpp::create_object<app::TypedObject>(get_class());
        }
        inline app::TypedObject__Array* create_array(int size) {
            return il2cpp::array_new<app::TypedObject__Array>(get_class(), size);
        }
    } // namespace TypedObject
} // namespace app::classes::types
