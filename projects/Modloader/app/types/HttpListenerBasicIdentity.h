#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListenerBasicIdentity {
        inline app::HttpListenerBasicIdentity__Class** type_info = (app::HttpListenerBasicIdentity__Class**)(modloader::win::memory::resolve_rva(0x0475C4C8));
        inline app::HttpListenerBasicIdentity__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerBasicIdentity__Class>(type_info, "System.Net", "HttpListenerBasicIdentity");
        }
        inline app::HttpListenerBasicIdentity* create() {
            return il2cpp::create_object<app::HttpListenerBasicIdentity>(get_class());
        }
    } // namespace HttpListenerBasicIdentity
} // namespace app::classes::types
