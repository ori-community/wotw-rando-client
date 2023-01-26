#pragma once
#include <Modloader/app/structs/Uri_Check__Enum.h>
#include <Modloader/app/structs/Uri_Check__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Uri_Check__Enum {
        inline app::Uri_Check__Enum__Class** type_info() {
            static app::Uri_Check__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Uri_Check__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Uri_Check__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_Check__Enum__Class>(type_info(), "System", "Uri", "Check");
        }
        inline app::Uri_Check__Enum* create() {
            return il2cpp::create_object<app::Uri_Check__Enum>(get_class());
        }
    } // namespace Uri_Check__Enum
} // namespace app::classes::types
