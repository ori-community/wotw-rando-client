#pragma once
#include <Modloader/app/structs/SafeBuffer.h>
#include <Modloader/app/structs/SafeBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeBuffer {
        inline app::SafeBuffer__Class** type_info() {
            static app::SafeBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafeBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafeBuffer__Class* get_class() {
            return il2cpp::get_class<app::SafeBuffer__Class>(type_info(), "System.Runtime.InteropServices", "SafeBuffer");
        }
        inline app::SafeBuffer* create() {
            return il2cpp::create_object<app::SafeBuffer>(get_class());
        }
    } // namespace SafeBuffer
} // namespace app::classes::types
