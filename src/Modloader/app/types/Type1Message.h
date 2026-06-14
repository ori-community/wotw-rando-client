#pragma once
#include <Modloader/app/structs/Type1Message.h>
#include <Modloader/app/structs/Type1Message__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Type1Message {
        inline app::Type1Message__Class** type_info() {
            static app::Type1Message__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Type1Message__Class**)(modloader::win::memory::resolve_rva(0x04716A90));
            }
            return cache;
        }
        inline app::Type1Message__Class* get_class() {
            return il2cpp::get_class<app::Type1Message__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "Type1Message");
        }
        inline app::Type1Message* create() {
            return il2cpp::create_object<app::Type1Message>(get_class());
        }
    } // namespace Type1Message
} // namespace app::classes::types
