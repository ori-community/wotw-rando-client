#pragma once
#include <Modloader/app/structs/AkAuxSendValue.h>
#include <Modloader/app/structs/AkAuxSendValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAuxSendValue {
        inline app::AkAuxSendValue__Class** type_info() {
            static app::AkAuxSendValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAuxSendValue__Class**)(modloader::win::memory::resolve_rva(0x047902F8));
            }
            return cache;
        }
        inline app::AkAuxSendValue__Class* get_class() {
            return il2cpp::get_class<app::AkAuxSendValue__Class>(type_info(), "", "AkAuxSendValue");
        }
        inline app::AkAuxSendValue* create() {
            return il2cpp::create_object<app::AkAuxSendValue>(get_class());
        }
    } // namespace AkAuxSendValue
} // namespace app::classes::types
