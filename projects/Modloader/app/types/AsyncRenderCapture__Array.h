#pragma once
#include <Modloader/app/structs/AsyncRenderCapture__Array.h>
#include <Modloader/app/structs/AsyncRenderCapture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRenderCapture__Array {
        inline app::AsyncRenderCapture__Array__Class** type_info() {
            static app::AsyncRenderCapture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncRenderCapture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncRenderCapture__Array__Class* get_class() {
            return il2cpp::get_class<app::AsyncRenderCapture__Array__Class>(type_info(), "", "AsyncRenderCapture[]");
        }
        inline app::AsyncRenderCapture__Array* create() {
            return il2cpp::create_object<app::AsyncRenderCapture__Array>(get_class());
        }
    } // namespace AsyncRenderCapture__Array
} // namespace app::classes::types
