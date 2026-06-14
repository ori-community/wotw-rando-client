#pragma once
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/MethodAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodAttributes__Enum {
        inline app::MethodAttributes__Enum__Class** type_info() {
            static app::MethodAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MethodAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MethodAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MethodAttributes__Enum__Class>(type_info(), "System.Reflection", "MethodAttributes");
        }
        inline app::MethodAttributes__Enum* create() {
            return il2cpp::create_object<app::MethodAttributes__Enum>(get_class());
        }
    } // namespace MethodAttributes__Enum
} // namespace app::classes::types
