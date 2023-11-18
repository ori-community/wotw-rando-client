#pragma once
#include <Modloader/app/structs/GCHandleType__Enum.h>
#include <Modloader/app/structs/GCHandleType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GCHandleType__Enum {
        inline app::GCHandleType__Enum__Class** type_info() {
            static app::GCHandleType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GCHandleType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GCHandleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GCHandleType__Enum__Class>(type_info(), "System.Runtime.InteropServices", "GCHandleType");
        }
        inline app::GCHandleType__Enum* create() {
            return il2cpp::create_object<app::GCHandleType__Enum>(get_class());
        }
    } // namespace GCHandleType__Enum
} // namespace app::classes::types
