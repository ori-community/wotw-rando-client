#pragma once
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#include <Modloader/app/structs/FieldAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldAttributes__Enum {
        inline app::FieldAttributes__Enum__Class** type_info() {
            static app::FieldAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FieldAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FieldAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::FieldAttributes__Enum__Class>(type_info(), "System.Reflection", "FieldAttributes");
        }
        inline app::FieldAttributes__Enum* create() {
            return il2cpp::create_object<app::FieldAttributes__Enum>(get_class());
        }
    } // namespace FieldAttributes__Enum
} // namespace app::classes::types
