#pragma once
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateType__Enum {
        inline app::UpdateType__Enum__Class** type_info() {
            static app::UpdateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpdateType__Enum__Class>(type_info(), "Moon", "UpdateType");
        }
        inline app::UpdateType__Enum* create() {
            return il2cpp::create_object<app::UpdateType__Enum>(get_class());
        }
    } // namespace UpdateType__Enum
} // namespace app::classes::types
