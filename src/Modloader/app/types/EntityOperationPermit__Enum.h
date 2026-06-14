#pragma once
#include <Modloader/app/structs/EntityOperationPermit__Enum.h>
#include <Modloader/app/structs/EntityOperationPermit__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityOperationPermit__Enum {
        inline app::EntityOperationPermit__Enum__Class** type_info() {
            static app::EntityOperationPermit__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityOperationPermit__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityOperationPermit__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityOperationPermit__Enum__Class>(type_info(), "Moon.Timeline", "EntityOperationPermit");
        }
        inline app::EntityOperationPermit__Enum* create() {
            return il2cpp::create_object<app::EntityOperationPermit__Enum>(get_class());
        }
    } // namespace EntityOperationPermit__Enum
} // namespace app::classes::types
