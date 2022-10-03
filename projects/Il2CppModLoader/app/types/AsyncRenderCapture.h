#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncRenderCapture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncRenderCapture__Class** type_info;
        inline app::AsyncRenderCapture__Class* get_class() {
            return il2cpp::get_class<app::AsyncRenderCapture__Class>(type_info, "", "AsyncRenderCapture");
        }
        inline app::AsyncRenderCapture* create() {
            return il2cpp::create_object<app::AsyncRenderCapture>(get_class());
        }
        inline app::AsyncRenderCapture__Array* create_array(int size) {
            return il2cpp::array_new<app::AsyncRenderCapture__Array>(get_class(), size);
        }
    } // namespace AsyncRenderCapture
} // namespace app::classes::types
