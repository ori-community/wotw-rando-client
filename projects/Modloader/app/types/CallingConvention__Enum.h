#pragma once
#include <Modloader/app/structs/CallingConvention__Enum.h>
#include <Modloader/app/structs/CallingConvention__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallingConvention__Enum {
        inline app::CallingConvention__Enum__Class** type_info() {
            static app::CallingConvention__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallingConvention__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallingConvention__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallingConvention__Enum__Class>(type_info(), "System.Runtime.InteropServices", "CallingConvention");
        }
        inline app::CallingConvention__Enum* create() {
            return il2cpp::create_object<app::CallingConvention__Enum>(get_class());
        }
    } // namespace CallingConvention__Enum
} // namespace app::classes::types
