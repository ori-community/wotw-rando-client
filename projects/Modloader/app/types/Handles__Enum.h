#pragma once
#include <Modloader/app/structs/Handles__Enum.h>
#include <Modloader/app/structs/Handles__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Handles__Enum {
        inline app::Handles__Enum__Class** type_info() {
            static app::Handles__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Handles__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Handles__Enum__Class* get_class() {
            return il2cpp::get_class<app::Handles__Enum__Class>(type_info(), "System", "Handles");
        }
        inline app::Handles__Enum* create() {
            return il2cpp::create_object<app::Handles__Enum>(get_class());
        }
    } // namespace Handles__Enum
} // namespace app::classes::types
