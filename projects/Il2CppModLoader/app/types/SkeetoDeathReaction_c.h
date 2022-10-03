#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoDeathReaction_c__Class** type_info;
        inline app::SkeetoDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDeathReaction_c__Class>(type_info, "", "SkeetoDeathReaction", "<>c");
        }
        inline app::SkeetoDeathReaction_c* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction_c>(get_class());
        }
    } // namespace SkeetoDeathReaction_c
} // namespace app::classes::types
