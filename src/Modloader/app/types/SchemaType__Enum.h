#pragma once
#include <Modloader/app/structs/SchemaType__Enum.h>
#include <Modloader/app/structs/SchemaType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaType__Enum {
        inline app::SchemaType__Enum__Class** type_info() {
            static app::SchemaType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaType__Enum__Class>(type_info(), "System.Xml.Schema", "SchemaType");
        }
        inline app::SchemaType__Enum* create() {
            return il2cpp::create_object<app::SchemaType__Enum>(get_class());
        }
    } // namespace SchemaType__Enum
} // namespace app::classes::types
