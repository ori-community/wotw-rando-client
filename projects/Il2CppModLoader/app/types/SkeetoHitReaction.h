#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoHitReaction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoHitReaction__Class** type_info;
        inline app::SkeetoHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoHitReaction__Class>(type_info, "", "SkeetoHitReaction");
        }
        inline app::SkeetoHitReaction* create() {
            return il2cpp::create_object<app::SkeetoHitReaction>(get_class());
        }
    } // namespace SkeetoHitReaction
} // namespace app::classes::types
