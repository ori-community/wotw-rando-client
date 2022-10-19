#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestStream {
        inline app::RequestStream__Class** type_info = (app::RequestStream__Class**)(modloader::win::memory::resolve_rva(0x0470BE60));
        inline app::RequestStream__Class* get_class() {
            return il2cpp::get_class<app::RequestStream__Class>(type_info, "System.Net", "RequestStream");
        }
        inline app::RequestStream* create() {
            return il2cpp::create_object<app::RequestStream>(get_class());
        }
    } // namespace RequestStream
} // namespace app::classes::types
