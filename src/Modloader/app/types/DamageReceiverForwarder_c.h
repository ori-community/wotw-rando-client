#pragma once
#include <Modloader/app/structs/DamageReceiverForwarder_c.h>
#include <Modloader/app/structs/DamageReceiverForwarder_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiverForwarder_c {
        inline app::DamageReceiverForwarder_c__Class** type_info() {
            static app::DamageReceiverForwarder_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageReceiverForwarder_c__Class**)(modloader::win::memory::resolve_rva(0x047371C0));
            }
            return cache;
        }
        inline app::DamageReceiverForwarder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiverForwarder_c__Class>(type_info(), "", "DamageReceiverForwarder", "<>c");
        }
        inline app::DamageReceiverForwarder_c* create() {
            return il2cpp::create_object<app::DamageReceiverForwarder_c>(get_class());
        }
    } // namespace DamageReceiverForwarder_c
} // namespace app::classes::types
