#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodResponse {
        inline app::MethodResponse__Class** type_info = (app::MethodResponse__Class**)(modloader::win::memory::resolve_rva(0x047507B8));
        inline app::MethodResponse__Class* get_class() {
            return il2cpp::get_class<app::MethodResponse__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodResponse");
        }
        inline app::MethodResponse* create() {
            return il2cpp::create_object<app::MethodResponse>(get_class());
        }
    } // namespace MethodResponse
} // namespace app::classes::types
