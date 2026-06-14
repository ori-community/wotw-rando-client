#pragma once
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodImplAttributes__Enum {
        inline app::MethodImplAttributes__Enum__Class** type_info() {
            static app::MethodImplAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MethodImplAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MethodImplAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MethodImplAttributes__Enum__Class>(type_info(), "System.Reflection", "MethodImplAttributes");
        }
        inline app::MethodImplAttributes__Enum* create() {
            return il2cpp::create_object<app::MethodImplAttributes__Enum>(get_class());
        }
    } // namespace MethodImplAttributes__Enum
} // namespace app::classes::types
