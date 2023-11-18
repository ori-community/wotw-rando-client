#pragma once
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/NetworkStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetworkStream {
        inline app::NetworkStream__Class** type_info() {
            static app::NetworkStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NetworkStream__Class**)(modloader::win::memory::resolve_rva(0x04710DF0));
            }
            return cache;
        }
        inline app::NetworkStream__Class* get_class() {
            return il2cpp::get_class<app::NetworkStream__Class>(type_info(), "System.Net.Sockets", "NetworkStream");
        }
        inline app::NetworkStream* create() {
            return il2cpp::create_object<app::NetworkStream>(get_class());
        }
    } // namespace NetworkStream
} // namespace app::classes::types
