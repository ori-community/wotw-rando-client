#pragma once
#include <Modloader/app/structs/SetObjectInfo__Array.h>
#include <Modloader/app/structs/SetObjectInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetObjectInfo__Array {
        inline app::SetObjectInfo__Array__Class** type_info() {
            static app::SetObjectInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetObjectInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetObjectInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SetObjectInfo__Array__Class>(type_info(), "PlayFab.DataModels", "SetObjectInfo[]");
        }
        inline app::SetObjectInfo__Array* create() {
            return il2cpp::create_object<app::SetObjectInfo__Array>(get_class());
        }
    } // namespace SetObjectInfo__Array
} // namespace app::classes::types
