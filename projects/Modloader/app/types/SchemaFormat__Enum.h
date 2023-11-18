#pragma once
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#include <Modloader/app/structs/SchemaFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaFormat__Enum {
        inline app::SchemaFormat__Enum__Class** type_info() {
            static app::SchemaFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaFormat__Enum__Class>(type_info(), "System.Data", "SchemaFormat");
        }
        inline app::SchemaFormat__Enum* create() {
            return il2cpp::create_object<app::SchemaFormat__Enum>(get_class());
        }
    } // namespace SchemaFormat__Enum
} // namespace app::classes::types
