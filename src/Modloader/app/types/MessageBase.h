#pragma once
#include <Modloader/app/structs/MessageBase.h>
#include <Modloader/app/structs/MessageBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBase {
        inline app::MessageBase__Class** type_info() {
            static app::MessageBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MessageBase__Class**)(modloader::win::memory::resolve_rva(0x04702AE8));
            }
            return cache;
        }
        inline app::MessageBase__Class* get_class() {
            return il2cpp::get_class<app::MessageBase__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "MessageBase");
        }
        inline app::MessageBase* create() {
            return il2cpp::create_object<app::MessageBase>(get_class());
        }
    } // namespace MessageBase
} // namespace app::classes::types
