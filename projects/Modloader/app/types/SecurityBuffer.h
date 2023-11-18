#pragma once
#include <Modloader/app/structs/SecurityBuffer.h>
#include <Modloader/app/structs/SecurityBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityBuffer {
        inline app::SecurityBuffer__Class** type_info() {
            static app::SecurityBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityBuffer__Class* get_class() {
            return il2cpp::get_class<app::SecurityBuffer__Class>(type_info(), "System.Net", "SecurityBuffer");
        }
        inline app::SecurityBuffer* create() {
            return il2cpp::create_object<app::SecurityBuffer>(get_class());
        }
    } // namespace SecurityBuffer
} // namespace app::classes::types
