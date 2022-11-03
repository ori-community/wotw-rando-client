#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTlsStream {
        inline app::MonoTlsStream__Class** type_info = (app::MonoTlsStream__Class**)(modloader::win::memory::resolve_rva(0x0478B4D8));
        inline app::MonoTlsStream__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsStream__Class>(type_info, "Mono.Net.Security", "MonoTlsStream");
        }
        inline app::MonoTlsStream* create() {
            return il2cpp::create_object<app::MonoTlsStream>(get_class());
        }
    } // namespace MonoTlsStream
} // namespace app::classes::types
