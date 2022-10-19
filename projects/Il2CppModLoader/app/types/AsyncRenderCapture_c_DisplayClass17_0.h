#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRenderCapture_c_DisplayClass17_0 {
        inline app::AsyncRenderCapture_c_DisplayClass17_0__Class** type_info = (app::AsyncRenderCapture_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04767A88));
        inline app::AsyncRenderCapture_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRenderCapture_c_DisplayClass17_0__Class>(type_info, "", "AsyncRenderCapture", "<>c__DisplayClass17_0");
        }
        inline app::AsyncRenderCapture_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::AsyncRenderCapture_c_DisplayClass17_0>(get_class());
        }
    } // namespace AsyncRenderCapture_c_DisplayClass17_0
} // namespace app::classes::types
