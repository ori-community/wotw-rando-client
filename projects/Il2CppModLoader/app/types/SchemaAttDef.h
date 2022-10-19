#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaAttDef {
        inline app::SchemaAttDef__Class** type_info = (app::SchemaAttDef__Class**)(modloader::win::memory::resolve_rva(0x04753D00));
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
