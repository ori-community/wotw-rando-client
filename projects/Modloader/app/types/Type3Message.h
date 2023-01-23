#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Type3Message__Class.h>
#include <Modloader/app/structs/Type3Message.h>

namespace app::classes::types {
    namespace Type3Message {
        inline app::Type3Message__Class** type_info = (app::Type3Message__Class**)(modloader::win::memory::resolve_rva(0x04759080));
        inline app::Type3Message__Class* get_class() {
            return il2cpp::get_class<app::Type3Message__Class>(type_info, "Mono.Security.Protocol.Ntlm", "Type3Message");
        }
        inline app::Type3Message* create() {
            return il2cpp::create_object<app::Type3Message>(get_class());
        }
    } // namespace Type3Message
} // namespace app::classes::types
