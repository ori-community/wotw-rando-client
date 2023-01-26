#pragma once
#include <Modloader/app/structs/Type2Message.h>
#include <Modloader/app/structs/Type2Message__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Type2Message {
        inline app::Type2Message__Class** type_info() {
            static app::Type2Message__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Type2Message__Class**)(modloader::win::memory::resolve_rva(0x04720AD8));
            }
            return cache;
        }
        inline app::Type2Message__Class* get_class() {
            return il2cpp::get_class<app::Type2Message__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "Type2Message");
        }
        inline app::Type2Message* create() {
            return il2cpp::create_object<app::Type2Message>(get_class());
        }
    } // namespace Type2Message
} // namespace app::classes::types
