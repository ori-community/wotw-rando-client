#pragma once
#include <Modloader/app/structs/SchemaEntity__Array.h>
#include <Modloader/app/structs/SchemaEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaEntity__Array {
        inline app::SchemaEntity__Array__Class** type_info() {
            static app::SchemaEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SchemaEntity__Array__Class>(type_info(), "System.Xml.Schema", "SchemaEntity[]");
        }
        inline app::SchemaEntity__Array* create() {
            return il2cpp::create_object<app::SchemaEntity__Array>(get_class());
        }
    } // namespace SchemaEntity__Array
} // namespace app::classes::types
