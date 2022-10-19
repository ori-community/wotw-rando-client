#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DigestSession {
        inline app::DigestSession__Class** type_info = (app::DigestSession__Class**)(modloader::win::memory::resolve_rva(0x0470E558));
        inline app::DigestSession__Class* get_class() {
            return il2cpp::get_class<app::DigestSession__Class>(type_info, "System.Net", "DigestSession");
        }
        inline app::DigestSession* create() {
            return il2cpp::create_object<app::DigestSession>(get_class());
        }
    } // namespace DigestSession
} // namespace app::classes::types
