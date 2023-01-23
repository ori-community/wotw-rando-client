#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReceiverForwarder__Class.h>
#include <Modloader/app/structs/DamageReceiverForwarder.h>

namespace app::classes::types {
    namespace DamageReceiverForwarder {
        namespace {
            inline app::DamageReceiverForwarder__Class* type_info_ref = nullptr;
        }
        inline app::DamageReceiverForwarder__Class** type_info = &type_info_ref;
        inline app::DamageReceiverForwarder__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverForwarder__Class>(type_info, "", "DamageReceiverForwarder");
        }
        inline app::DamageReceiverForwarder* create() {
            return il2cpp::create_object<app::DamageReceiverForwarder>(get_class());
        }
    } // namespace DamageReceiverForwarder
} // namespace app::classes::types
