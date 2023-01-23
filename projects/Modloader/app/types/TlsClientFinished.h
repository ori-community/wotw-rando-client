#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsClientFinished__Class.h>
#include <Modloader/app/structs/TlsClientFinished.h>

namespace app::classes::types {
    namespace TlsClientFinished {
        inline app::TlsClientFinished__Class** type_info = (app::TlsClientFinished__Class**)(modloader::win::memory::resolve_rva(0x04706420));
        inline app::TlsClientFinished__Class* get_class() {
            return il2cpp::get_class<app::TlsClientFinished__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientFinished");
        }
        inline app::TlsClientFinished* create() {
            return il2cpp::create_object<app::TlsClientFinished>(get_class());
        }
    } // namespace TlsClientFinished
} // namespace app::classes::types
