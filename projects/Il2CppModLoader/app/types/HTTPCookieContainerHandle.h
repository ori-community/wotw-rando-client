#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTTPCookieContainerHandle {
        inline app::HTTPCookieContainerHandle__Class** type_info = (app::HTTPCookieContainerHandle__Class**)(modloader::win::memory::resolve_rva(0x04713678));
        inline app::HTTPCookieContainerHandle__Class* get_class() {
            return il2cpp::get_class<app::HTTPCookieContainerHandle__Class>(type_info, "Steamworks", "HTTPCookieContainerHandle");
        }
        inline app::HTTPCookieContainerHandle* create() {
            return il2cpp::create_object<app::HTTPCookieContainerHandle>(get_class());
        }
        inline app::HTTPCookieContainerHandle__Boxed* box(app::HTTPCookieContainerHandle value) {
            return il2cpp::box_value<app::HTTPCookieContainerHandle__Boxed>(get_class(), value);
        }
    } // namespace HTTPCookieContainerHandle
} // namespace app::classes::types
