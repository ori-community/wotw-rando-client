#pragma once
#include <Modloader/app/structs/SchemaElementDecl__Array.h>
#include <Modloader/app/structs/SchemaElementDecl__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaElementDecl__Array {
        inline app::SchemaElementDecl__Array__Class** type_info() {
            static app::SchemaElementDecl__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaElementDecl__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaElementDecl__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaElementDecl__Array__Class>(type_info(), "System.Xml.Schema", "SchemaElementDecl[]");
        }
        inline app::SchemaElementDecl__Array* create() {
            return il2cpp::create_object<app::SchemaElementDecl__Array>(get_class());
        }
    } // namespace SchemaElementDecl__Array
} // namespace app::classes::types
