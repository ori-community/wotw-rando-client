#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruption_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlockDamageInterruption_c__Class** type_info;
        inline app::BlockDamageInterruption_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockDamageInterruption_c__Class>(type_info, "Moon.Timeline", "BlockDamageInterruption", "<>c");
        }
        inline app::BlockDamageInterruption_c* create() {
            return il2cpp::create_object<app::BlockDamageInterruption_c>(get_class());
        }
    } // namespace BlockDamageInterruption_c
} // namespace app::classes::types
