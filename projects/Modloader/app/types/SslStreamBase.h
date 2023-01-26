#pragma once
#include <Modloader/app/structs/SslStreamBase.h>
#include <Modloader/app/structs/SslStreamBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslStreamBase {
        inline app::SslStreamBase__Class** type_info() {
            static app::SslStreamBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslStreamBase__Class**)(modloader::win::memory::resolve_rva(0x0476E920));
            }
            return cache;
        }
        inline app::SslStreamBase__Class* get_class() {
            return il2cpp::get_class<app::SslStreamBase__Class>(type_info(), "Mono.Security.Protocol.Tls", "SslStreamBase");
        }
        inline app::SslStreamBase* create() {
            return il2cpp::create_object<app::SslStreamBase>(get_class());
        }
    } // namespace SslStreamBase
} // namespace app::classes::types
