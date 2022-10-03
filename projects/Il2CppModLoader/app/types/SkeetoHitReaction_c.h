#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoHitReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoHitReaction_c__Class** type_info;
        inline app::SkeetoHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoHitReaction_c__Class>(type_info, "", "SkeetoHitReaction", "<>c");
        }
        inline app::SkeetoHitReaction_c* create() {
            return il2cpp::create_object<app::SkeetoHitReaction_c>(get_class());
        }
    } // namespace SkeetoHitReaction_c
} // namespace app::classes::types
