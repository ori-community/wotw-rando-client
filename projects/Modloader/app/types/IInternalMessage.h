#pragma once
#include <Modloader/app/structs/IInternalMessage.h>
#include <Modloader/app/structs/IInternalMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInternalMessage {
        inline app::IInternalMessage__Class** type_info() {
            static app::IInternalMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInternalMessage__Class**)(modloader::win::memory::resolve_rva(0x047679A0));
            }
            return cache;
        }
        inline app::IInternalMessage__Class* get_class() {
            return il2cpp::get_class<app::IInternalMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IInternalMessage");
        }
    } // namespace IInternalMessage
} // namespace app::classes::types
