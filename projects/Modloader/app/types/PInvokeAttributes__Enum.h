#pragma once
#include <Modloader/app/structs/PInvokeAttributes__Enum.h>
#include <Modloader/app/structs/PInvokeAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PInvokeAttributes__Enum {
        inline app::PInvokeAttributes__Enum__Class** type_info() {
            static app::PInvokeAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PInvokeAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PInvokeAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::PInvokeAttributes__Enum__Class>(type_info(), "System.Reflection", "PInvokeAttributes");
        }
        inline app::PInvokeAttributes__Enum* create() {
            return il2cpp::create_object<app::PInvokeAttributes__Enum>(get_class());
        }
    } // namespace PInvokeAttributes__Enum
} // namespace app::classes::types
