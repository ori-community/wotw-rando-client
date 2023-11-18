#pragma once
#include <Modloader/app/structs/SchemaTypes__Enum.h>
#include <Modloader/app/structs/SchemaTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaTypes__Enum {
        inline app::SchemaTypes__Enum__Class** type_info() {
            static app::SchemaTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaTypes__Enum__Class>(type_info(), "System.Xml.Serialization", "SchemaTypes");
        }
        inline app::SchemaTypes__Enum* create() {
            return il2cpp::create_object<app::SchemaTypes__Enum>(get_class());
        }
    } // namespace SchemaTypes__Enum
} // namespace app::classes::types
