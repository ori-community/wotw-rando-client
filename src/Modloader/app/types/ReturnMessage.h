#pragma once
#include <Modloader/app/structs/ReturnMessage.h>
#include <Modloader/app/structs/ReturnMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReturnMessage {
        inline app::ReturnMessage__Class** type_info() {
            static app::ReturnMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A710));
            }
            return cache;
        }
        inline app::ReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::ReturnMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ReturnMessage");
        }
        inline app::ReturnMessage* create() {
            return il2cpp::create_object<app::ReturnMessage>(get_class());
        }
    } // namespace ReturnMessage
} // namespace app::classes::types
