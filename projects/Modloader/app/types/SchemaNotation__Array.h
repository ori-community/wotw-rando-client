#pragma once
#include <Modloader/app/structs/SchemaNotation__Array.h>
#include <Modloader/app/structs/SchemaNotation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaNotation__Array {
        inline app::SchemaNotation__Array__Class** type_info() {
            static app::SchemaNotation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaNotation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaNotation__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaNotation__Array__Class>(type_info(), "System.Xml.Schema", "SchemaNotation[]");
        }
        inline app::SchemaNotation__Array* create() {
            return il2cpp::create_object<app::SchemaNotation__Array>(get_class());
        }
    } // namespace SchemaNotation__Array
} // namespace app::classes::types
