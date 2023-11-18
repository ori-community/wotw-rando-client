#pragma once
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#include <Modloader/app/structs/UpdateCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCategory__Enum {
        inline app::UpdateCategory__Enum__Class** type_info() {
            static app::UpdateCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpdateCategory__Enum__Class>(type_info(), "Moon", "UpdateCategory");
        }
        inline app::UpdateCategory__Enum* create() {
            return il2cpp::create_object<app::UpdateCategory__Enum>(get_class());
        }
    } // namespace UpdateCategory__Enum
} // namespace app::classes::types
