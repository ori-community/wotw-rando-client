#pragma once
#include <Modloader/app/structs/AsyncRenderCapture_c_DisplayClass17_0.h>
#include <Modloader/app/structs/AsyncRenderCapture_c_DisplayClass17_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRenderCapture_c_DisplayClass17_0 {
        inline app::AsyncRenderCapture_c_DisplayClass17_0__Class** type_info() {
            static app::AsyncRenderCapture_c_DisplayClass17_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncRenderCapture_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04767A88));
            }
            return cache;
        }
        inline app::AsyncRenderCapture_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRenderCapture_c_DisplayClass17_0__Class>(type_info(), "", "AsyncRenderCapture", "<>c__DisplayClass17_0");
        }
        inline app::AsyncRenderCapture_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::AsyncRenderCapture_c_DisplayClass17_0>(get_class());
        }
    } // namespace AsyncRenderCapture_c_DisplayClass17_0
} // namespace app::classes::types
