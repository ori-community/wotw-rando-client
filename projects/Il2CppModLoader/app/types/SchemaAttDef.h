#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaAttDef {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SchemaAttDef__Class** type_info;
        inline app::SchemaAttDef__Class* get_class() {
            return il2cpp::get_class<app::SchemaAttDef__Class>(type_info, "System.Xml.Schema", "SchemaAttDef");
        }
        inline app::SchemaAttDef* create() {
            return il2cpp::create_object<app::SchemaAttDef>(get_class());
        }
        inline app::SchemaAttDef__Array* create_array(int size) {
            return il2cpp::array_new<app::SchemaAttDef__Array>(get_class(), size);
        }
        inline app::SchemaAttDef__Array* create_array(const std::vector<app::SchemaAttDef*>& items) {
            return il2cpp::array_new<app::SchemaAttDef__Array>(get_class(), items);
        }
    } // namespace SchemaAttDef
} // namespace app::classes::types
