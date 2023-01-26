#pragma once
#include <Modloader/app/structs/ValueKind__Enum.h>
#include <Modloader/app/structs/ValueKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueKind__Enum {
        inline app::ValueKind__Enum__Class** type_info() {
            static app::ValueKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValueKind__Enum__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "ValueKind");
        }
        inline app::ValueKind__Enum* create() {
            return il2cpp::create_object<app::ValueKind__Enum>(get_class());
        }
    } // namespace ValueKind__Enum
} // namespace app::classes::types
