#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EndPointListener {
        inline app::EndPointListener__Class** type_info = (app::EndPointListener__Class**)(modloader::win::memory::resolve_rva(0x04739A08));
        inline app::EndPointListener__Class* get_class() {
            return il2cpp::get_class<app::EndPointListener__Class>(type_info, "System.Net", "EndPointListener");
        }
        inline app::EndPointListener* create() {
            return il2cpp::create_object<app::EndPointListener>(get_class());
        }
    } // namespace EndPointListener
} // namespace app::classes::types
