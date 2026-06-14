#pragma once
#include <Modloader/app/structs/EInputSourceMode__Enum.h>
#include <Modloader/app/structs/EInputSourceMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EInputSourceMode__Enum {
        inline app::EInputSourceMode__Enum__Class** type_info() {
            static app::EInputSourceMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EInputSourceMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EInputSourceMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputSourceMode__Enum__Class>(type_info(), "Steamworks", "EInputSourceMode");
        }
        inline app::EInputSourceMode__Enum* create() {
            return il2cpp::create_object<app::EInputSourceMode__Enum>(get_class());
        }
    } // namespace EInputSourceMode__Enum
} // namespace app::classes::types
