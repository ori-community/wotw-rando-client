#pragma once
#include <Modloader/app/structs/SchemaAttDef__Array.h>
#include <Modloader/app/structs/SchemaAttDef__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaAttDef__Array {
        inline app::SchemaAttDef__Array__Class** type_info() {
            static app::SchemaAttDef__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaAttDef__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaAttDef__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaAttDef__Array__Class>(type_info(), "System.Xml.Schema", "SchemaAttDef[]");
        }
        inline app::SchemaAttDef__Array* create() {
            return il2cpp::create_object<app::SchemaAttDef__Array>(get_class());
        }
    } // namespace SchemaAttDef__Array
} // namespace app::classes::types
