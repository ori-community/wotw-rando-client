#pragma once
#include <Modloader/app/structs/Int16Enum__Enum.h>
#include <Modloader/app/structs/Int16Enum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int16Enum__Enum {
        inline app::Int16Enum__Enum__Class** type_info() {
            static app::Int16Enum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int16Enum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int16Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::Int16Enum__Enum__Class>(type_info(), "System", "Int16Enum");
        }
        inline app::Int16Enum__Enum* create() {
            return il2cpp::create_object<app::Int16Enum__Enum>(get_class());
        }
    } // namespace Int16Enum__Enum
} // namespace app::classes::types
