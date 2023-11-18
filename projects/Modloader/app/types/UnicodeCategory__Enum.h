#pragma once
#include <Modloader/app/structs/UnicodeCategory__Enum.h>
#include <Modloader/app/structs/UnicodeCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnicodeCategory__Enum {
        inline app::UnicodeCategory__Enum__Class** type_info() {
            static app::UnicodeCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnicodeCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnicodeCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeCategory__Enum__Class>(type_info(), "System.Globalization", "UnicodeCategory");
        }
        inline app::UnicodeCategory__Enum* create() {
            return il2cpp::create_object<app::UnicodeCategory__Enum>(get_class());
        }
    } // namespace UnicodeCategory__Enum
} // namespace app::classes::types
