#pragma once
#include <Modloader/app/structs/EServerMode__Enum.h>
#include <Modloader/app/structs/EServerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EServerMode__Enum {
        inline app::EServerMode__Enum__Class** type_info() {
            static app::EServerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EServerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EServerMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EServerMode__Enum__Class>(type_info(), "Steamworks", "EServerMode");
        }
        inline app::EServerMode__Enum* create() {
            return il2cpp::create_object<app::EServerMode__Enum>(get_class());
        }
    } // namespace EServerMode__Enum
} // namespace app::classes::types
