#pragma once
#include <Modloader/app/structs/SchemaBuilder.h>
#include <Modloader/app/structs/SchemaBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaBuilder {
        inline app::SchemaBuilder__Class** type_info() {
            static app::SchemaBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaBuilder__Class* get_class() {
            return il2cpp::get_class<app::SchemaBuilder__Class>(type_info(), "System.Xml.Schema", "SchemaBuilder");
        }
        inline app::SchemaBuilder* create() {
            return il2cpp::create_object<app::SchemaBuilder>(get_class());
        }
    } // namespace SchemaBuilder
} // namespace app::classes::types
