#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDamageReceiverPuppet {
        inline app::SeinDamageReceiverPuppet__Class** type_info = (app::SeinDamageReceiverPuppet__Class**)(modloader::win::memory::resolve_rva(0x04782DA0));
        inline app::SeinDamageReceiverPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReceiverPuppet__Class>(type_info, "", "SeinDamageReceiverPuppet");
        }
        inline app::SeinDamageReceiverPuppet* create() {
            return il2cpp::create_object<app::SeinDamageReceiverPuppet>(get_class());
        }
    } // namespace SeinDamageReceiverPuppet
} // namespace app::classes::types
