#pragma once
#include <Modloader/app/structs/Type3Message.h>
#include <Modloader/app/structs/Type3Message__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Type3Message {
        inline app::Type3Message__Class** type_info() {
            static app::Type3Message__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Type3Message__Class**)(modloader::win::memory::resolve_rva(0x04759080));
            }
            return cache;
        }
        inline app::Type3Message__Class* get_class() {
            return il2cpp::get_class<app::Type3Message__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "Type3Message");
        }
        inline app::Type3Message* create() {
            return il2cpp::create_object<app::Type3Message>(get_class());
        }
    } // namespace Type3Message
} // namespace app::classes::types
