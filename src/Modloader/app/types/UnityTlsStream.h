#pragma once
#include <Modloader/app/structs/UnityTlsStream.h>
#include <Modloader/app/structs/UnityTlsStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTlsStream {
        inline app::UnityTlsStream__Class** type_info() {
            static app::UnityTlsStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityTlsStream__Class**)(modloader::win::memory::resolve_rva(0x0474AD18));
            }
            return cache;
        }
        inline app::UnityTlsStream__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsStream__Class>(type_info(), "Mono.Unity", "UnityTlsStream");
        }
        inline app::UnityTlsStream* create() {
            return il2cpp::create_object<app::UnityTlsStream>(get_class());
        }
    } // namespace UnityTlsStream
} // namespace app::classes::types
