#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTlsStream {
        inline app::UnityTlsStream__Class** type_info = (app::UnityTlsStream__Class**)(modloader::win::memory::resolve_rva(0x0474AD18));
        inline app::UnityTlsStream__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsStream__Class>(type_info, "Mono.Unity", "UnityTlsStream");
        }
        inline app::UnityTlsStream* create() {
            return il2cpp::create_object<app::UnityTlsStream>(get_class());
        }
    } // namespace UnityTlsStream
} // namespace app::classes::types
