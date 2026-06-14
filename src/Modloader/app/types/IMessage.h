#pragma once
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMessage {
        inline app::IMessage__Class** type_info() {
            static app::IMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMessage__Class**)(modloader::win::memory::resolve_rva(0x0476B180));
            }
            return cache;
        }
        inline app::IMessage__Class* get_class() {
            return il2cpp::get_class<app::IMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMessage");
        }
    } // namespace IMessage
} // namespace app::classes::types
