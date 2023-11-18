#pragma once
#include <Modloader/app/structs/UnescapeMode__Enum.h>
#include <Modloader/app/structs/UnescapeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnescapeMode__Enum {
        inline app::UnescapeMode__Enum__Class** type_info() {
            static app::UnescapeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnescapeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnescapeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnescapeMode__Enum__Class>(type_info(), "System", "UnescapeMode");
        }
        inline app::UnescapeMode__Enum* create() {
            return il2cpp::create_object<app::UnescapeMode__Enum>(get_class());
        }
    } // namespace UnescapeMode__Enum
} // namespace app::classes::types
