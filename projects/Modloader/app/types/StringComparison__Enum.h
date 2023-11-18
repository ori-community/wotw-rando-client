#pragma once
#include <Modloader/app/structs/StringComparison__Enum.h>
#include <Modloader/app/structs/StringComparison__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringComparison__Enum {
        inline app::StringComparison__Enum__Class** type_info() {
            static app::StringComparison__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringComparison__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::StringComparison__Enum__Class>(type_info(), "System", "StringComparison");
        }
        inline app::StringComparison__Enum* create() {
            return il2cpp::create_object<app::StringComparison__Enum>(get_class());
        }
    } // namespace StringComparison__Enum
} // namespace app::classes::types
