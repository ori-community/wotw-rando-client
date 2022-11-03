#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieContainer {
        inline app::CookieContainer__Class** type_info = (app::CookieContainer__Class**)(modloader::win::memory::resolve_rva(0x04722A70));
        inline app::CookieContainer__Class* get_class() {
            return il2cpp::get_class<app::CookieContainer__Class>(type_info, "System.Net", "CookieContainer");
        }
        inline app::CookieContainer* create() {
            return il2cpp::create_object<app::CookieContainer>(get_class());
        }
    } // namespace CookieContainer
} // namespace app::classes::types
