#pragma once
#include <Modloader/app/structs/TargetType__Enum.h>
#include <Modloader/app/structs/TargetType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetType__Enum {
        inline app::TargetType__Enum__Class** type_info() {
            static app::TargetType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TargetType__Enum__Class>(type_info(), "UnityEngine.Bindings", "TargetType");
        }
        inline app::TargetType__Enum* create() {
            return il2cpp::create_object<app::TargetType__Enum>(get_class());
        }
    } // namespace TargetType__Enum
} // namespace app::classes::types
