#pragma once
#include <Modloader/app/structs/SchemaAttDef_Reserve__Enum.h>
#include <Modloader/app/structs/SchemaAttDef_Reserve__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaAttDef_Reserve__Enum {
        inline app::SchemaAttDef_Reserve__Enum__Class** type_info() {
            static app::SchemaAttDef_Reserve__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaAttDef_Reserve__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaAttDef_Reserve__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaAttDef_Reserve__Enum__Class>(type_info(), "System.Xml.Schema", "SchemaAttDef", "Reserve");
        }
        inline app::SchemaAttDef_Reserve__Enum* create() {
            return il2cpp::create_object<app::SchemaAttDef_Reserve__Enum>(get_class());
        }
    } // namespace SchemaAttDef_Reserve__Enum
} // namespace app::classes::types
