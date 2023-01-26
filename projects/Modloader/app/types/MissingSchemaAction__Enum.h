#pragma once
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingSchemaAction__Enum {
        inline app::MissingSchemaAction__Enum__Class** type_info() {
            static app::MissingSchemaAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MissingSchemaAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MissingSchemaAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::MissingSchemaAction__Enum__Class>(type_info(), "System.Data", "MissingSchemaAction");
        }
        inline app::MissingSchemaAction__Enum* create() {
            return il2cpp::create_object<app::MissingSchemaAction__Enum>(get_class());
        }
    } // namespace MissingSchemaAction__Enum
} // namespace app::classes::types
