#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectMap_1 {
        namespace {
            app::ObjectMap_1__Class* type_info_ref = nullptr;
        }
        app::ObjectMap_1__Class** type_info = &type_info_ref;
        inline app::ObjectMap_1__Class* get_class() {
            return il2cpp::get_class<app::ObjectMap_1__Class>(type_info, "System.Xml.Serialization", "ObjectMap");
        }
        inline app::ObjectMap_1* create() {
            return il2cpp::create_object<app::ObjectMap_1>(get_class());
        }
    } // namespace ObjectMap_1
} // namespace app::classes::types
