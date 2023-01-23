#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SslStreamBase_InternalAsyncResult__Class.h>
#include <Modloader/app/structs/SslStreamBase_InternalAsyncResult.h>

namespace app::classes::types {
    namespace SslStreamBase_InternalAsyncResult {
        inline app::SslStreamBase_InternalAsyncResult__Class** type_info = (app::SslStreamBase_InternalAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0471CFC8));
        inline app::SslStreamBase_InternalAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SslStreamBase_InternalAsyncResult__Class>(type_info, "Mono.Security.Protocol.Tls", "SslStreamBase", "InternalAsyncResult");
        }
        inline app::SslStreamBase_InternalAsyncResult* create() {
            return il2cpp::create_object<app::SslStreamBase_InternalAsyncResult>(get_class());
        }
    } // namespace SslStreamBase_InternalAsyncResult
} // namespace app::classes::types
