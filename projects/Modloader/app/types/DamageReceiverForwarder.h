#pragma once
#include <Modloader/app/structs/DamageReceiverForwarder.h>
#include <Modloader/app/structs/DamageReceiverForwarder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiverForwarder {
        inline app::DamageReceiverForwarder__Class** type_info() {
            static app::DamageReceiverForwarder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReceiverForwarder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReceiverForwarder__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverForwarder__Class>(type_info(), "", "DamageReceiverForwarder");
        }
        inline app::DamageReceiverForwarder* create() {
            return il2cpp::create_object<app::DamageReceiverForwarder>(get_class());
        }
    } // namespace DamageReceiverForwarder
} // namespace app::classes::types
