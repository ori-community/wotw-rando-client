#pragma once
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallingConventions__Enum {
        inline app::CallingConventions__Enum__Class** type_info() {
            static app::CallingConventions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallingConventions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallingConventions__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallingConventions__Enum__Class>(type_info(), "System.Reflection", "CallingConventions");
        }
        inline app::CallingConventions__Enum* create() {
            return il2cpp::create_object<app::CallingConventions__Enum>(get_class());
        }
    } // namespace CallingConventions__Enum
} // namespace app::classes::types
