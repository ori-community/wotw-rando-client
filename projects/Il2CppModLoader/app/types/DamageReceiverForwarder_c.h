#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiverForwarder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageReceiverForwarder_c__Class** type_info;
        inline app::DamageReceiverForwarder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiverForwarder_c__Class>(type_info, "", "DamageReceiverForwarder", "<>c");
        }
        inline app::DamageReceiverForwarder_c* create() {
            return il2cpp::create_object<app::DamageReceiverForwarder_c>(get_class());
        }
    } // namespace DamageReceiverForwarder_c
} // namespace app::classes::types
