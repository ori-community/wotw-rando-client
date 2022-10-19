#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiver_c {
        inline app::DamageReceiver_c__Class** type_info = (app::DamageReceiver_c__Class**)(modloader::win::memory::resolve_rva(0x04736F30));
        inline app::DamageReceiver_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_c__Class>(type_info, "Moon", "DamageReceiver", "<>c");
        }
        inline app::DamageReceiver_c* create() {
            return il2cpp::create_object<app::DamageReceiver_c>(get_class());
        }
    } // namespace DamageReceiver_c
} // namespace app::classes::types
