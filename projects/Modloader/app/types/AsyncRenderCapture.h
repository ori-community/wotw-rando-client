#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRenderCapture {
        inline app::AsyncRenderCapture__Class** type_info = (app::AsyncRenderCapture__Class**)(modloader::win::memory::resolve_rva(0x0472DAA0));
        inline app::AsyncRenderCapture__Class* get_class() {
            return il2cpp::get_class<app::AsyncRenderCapture__Class>(type_info, "", "AsyncRenderCapture");
        }
        inline app::AsyncRenderCapture* create() {
            return il2cpp::create_object<app::AsyncRenderCapture>(get_class());
        }
        inline app::AsyncRenderCapture__Array* create_array(int size) {
            return il2cpp::array_new<app::AsyncRenderCapture__Array>(get_class(), size);
        }
        inline app::AsyncRenderCapture__Array* create_array(const std::vector<app::AsyncRenderCapture*>& items) {
            return il2cpp::array_new<app::AsyncRenderCapture__Array>(get_class(), items);
        }
    } // namespace AsyncRenderCapture
} // namespace app::classes::types
