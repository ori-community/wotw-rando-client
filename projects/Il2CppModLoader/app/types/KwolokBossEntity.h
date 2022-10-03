#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossEntity__Class** type_info;
        inline app::KwolokBossEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEntity__Class>(type_info, "", "KwolokBossEntity");
        }
        inline app::KwolokBossEntity* create() {
            return il2cpp::create_object<app::KwolokBossEntity>(get_class());
        }
    } // namespace KwolokBossEntity
} // namespace app::classes::types
