#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Type1Message {
        inline app::Type1Message__Class** type_info = (app::Type1Message__Class**)(modloader::win::memory::resolve_rva(0x04716A90));
        inline app::Type1Message__Class* get_class() {
            return il2cpp::get_class<app::Type1Message__Class>(type_info, "Mono.Security.Protocol.Ntlm", "Type1Message");
        }
        inline app::Type1Message* create() {
            return il2cpp::create_object<app::Type1Message>(get_class());
        }
    } // namespace Type1Message
} // namespace app::classes::types
