#pragma once
#include <Modloader/app/structs/ErrorMessage.h>
#include <Modloader/app/structs/ErrorMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ErrorMessage {
        inline app::ErrorMessage__Class** type_info() {
            static app::ErrorMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ErrorMessage__Class**)(modloader::win::memory::resolve_rva(0x0476D548));
            }
            return cache;
        }
        inline app::ErrorMessage__Class* get_class() {
            return il2cpp::get_class<app::ErrorMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "ErrorMessage");
        }
        inline app::ErrorMessage* create() {
            return il2cpp::create_object<app::ErrorMessage>(get_class());
        }
    } // namespace ErrorMessage
} // namespace app::classes::types
