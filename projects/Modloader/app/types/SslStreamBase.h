#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SslStreamBase__Class.h>
#include <Modloader/app/structs/SslStreamBase.h>

namespace app::classes::types {
    namespace SslStreamBase {
        inline app::SslStreamBase__Class** type_info = (app::SslStreamBase__Class**)(modloader::win::memory::resolve_rva(0x0476E920));
        inline app::SslStreamBase__Class* get_class() {
            return il2cpp::get_class<app::SslStreamBase__Class>(type_info, "Mono.Security.Protocol.Tls", "SslStreamBase");
        }
        inline app::SslStreamBase* create() {
            return il2cpp::create_object<app::SslStreamBase>(get_class());
        }
    } // namespace SslStreamBase
} // namespace app::classes::types
