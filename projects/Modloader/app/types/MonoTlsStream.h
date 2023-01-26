#pragma once
#include <Modloader/app/structs/MonoTlsStream.h>
#include <Modloader/app/structs/MonoTlsStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoTlsStream {
        inline app::MonoTlsStream__Class** type_info() {
            static app::MonoTlsStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoTlsStream__Class**)(modloader::win::memory::resolve_rva(0x0478B4D8));
            }
            return cache;
        }
        inline app::MonoTlsStream__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsStream__Class>(type_info(), "Mono.Net.Security", "MonoTlsStream");
        }
        inline app::MonoTlsStream* create() {
            return il2cpp::create_object<app::MonoTlsStream>(get_class());
        }
    } // namespace MonoTlsStream
} // namespace app::classes::types
