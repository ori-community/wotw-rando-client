#pragma once
#include <Modloader/app/structs/DTSubStringType__Enum.h>
#include <Modloader/app/structs/DTSubStringType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DTSubStringType__Enum {
        inline app::DTSubStringType__Enum__Class** type_info() {
            static app::DTSubStringType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DTSubStringType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DTSubStringType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DTSubStringType__Enum__Class>(type_info(), "System", "DTSubStringType");
        }
        inline app::DTSubStringType__Enum* create() {
            return il2cpp::create_object<app::DTSubStringType__Enum>(get_class());
        }
    } // namespace DTSubStringType__Enum
} // namespace app::classes::types
