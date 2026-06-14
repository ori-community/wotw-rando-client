#pragma once
#include <Modloader/app/structs/BuiltinCategory__Enum.h>
#include <Modloader/app/structs/BuiltinCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuiltinCategory__Enum {
        inline app::BuiltinCategory__Enum__Class** type_info() {
            static app::BuiltinCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuiltinCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuiltinCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::BuiltinCategory__Enum__Class>(type_info(), "UnityEngine.Profiling", "BuiltinCategory");
        }
        inline app::BuiltinCategory__Enum* create() {
            return il2cpp::create_object<app::BuiltinCategory__Enum>(get_class());
        }
    } // namespace BuiltinCategory__Enum
} // namespace app::classes::types
