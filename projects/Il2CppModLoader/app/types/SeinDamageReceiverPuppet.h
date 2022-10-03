#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReceiverPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDamageReceiverPuppet__Class** type_info;
        inline app::SeinDamageReceiverPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReceiverPuppet__Class>(type_info, "", "SeinDamageReceiverPuppet");
        }
        inline app::SeinDamageReceiverPuppet* create() {
            return il2cpp::create_object<app::SeinDamageReceiverPuppet>(get_class());
        }
    } // namespace SeinDamageReceiverPuppet
} // namespace app::classes::types
