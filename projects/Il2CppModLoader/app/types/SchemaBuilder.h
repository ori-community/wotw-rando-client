#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaBuilder {
        namespace {
            inline app::SchemaBuilder__Class* type_info_ref = nullptr;
        }
        inline app::SchemaBuilder__Class** type_info = &type_info_ref;
        inline app::SchemaBuilder__Class* get_class() {
            return il2cpp::get_class<app::SchemaBuilder__Class>(type_info, "System.Xml.Schema", "SchemaBuilder");
        }
        inline app::SchemaBuilder* create() {
            return il2cpp::create_object<app::SchemaBuilder>(get_class());
        }
    } // namespace SchemaBuilder
} // namespace app::classes::types
