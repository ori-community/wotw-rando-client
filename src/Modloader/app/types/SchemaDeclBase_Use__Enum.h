#pragma once
#include <Modloader/app/structs/SchemaDeclBase_Use__Enum.h>
#include <Modloader/app/structs/SchemaDeclBase_Use__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaDeclBase_Use__Enum {
        inline app::SchemaDeclBase_Use__Enum__Class** type_info() {
            static app::SchemaDeclBase_Use__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemaDeclBase_Use__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemaDeclBase_Use__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SchemaDeclBase_Use__Enum__Class>(type_info(), "System.Xml.Schema", "SchemaDeclBase", "Use");
        }
        inline app::SchemaDeclBase_Use__Enum* create() {
            return il2cpp::create_object<app::SchemaDeclBase_Use__Enum>(get_class());
        }
    } // namespace SchemaDeclBase_Use__Enum
} // namespace app::classes::types
