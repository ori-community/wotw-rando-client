#pragma once
#include <Modloader/app/structs/IntPtrPtr.h>
#include <Modloader/app/structs/IntPtrPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPtrPtr {
        inline app::IntPtrPtr__Class** type_info() {
            static app::IntPtrPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntPtrPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntPtrPtr__Class* get_class() {
            return il2cpp::get_class<app::IntPtrPtr__Class>(type_info(), "System", "IntPtr*");
        }
        inline app::IntPtrPtr* create() {
            return il2cpp::create_object<app::IntPtrPtr>(get_class());
        }
    } // namespace IntPtrPtr
} // namespace app::classes::types
