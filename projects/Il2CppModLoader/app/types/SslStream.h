#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslStream {
        inline app::SslStream__Class** type_info = (app::SslStream__Class**)(modloader::win::memory::resolve_rva(0x04710B70));
        inline app::SslStream__Class* get_class() {
            return il2cpp::get_class<app::SslStream__Class>(type_info, "System.Net.Security", "SslStream");
        }
        inline app::SslStream* create() {
            return il2cpp::create_object<app::SslStream>(get_class());
        }
    } // namespace SslStream
} // namespace app::classes::types
