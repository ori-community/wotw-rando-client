#pragma once
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/SslStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslStream {
        inline app::SslStream__Class** type_info() {
            static app::SslStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslStream__Class**)(modloader::win::memory::resolve_rva(0x04710B70));
            }
            return cache;
        }
        inline app::SslStream__Class* get_class() {
            return il2cpp::get_class<app::SslStream__Class>(type_info(), "System.Net.Security", "SslStream");
        }
        inline app::SslStream* create() {
            return il2cpp::create_object<app::SslStream>(get_class());
        }
    } // namespace SslStream
} // namespace app::classes::types
