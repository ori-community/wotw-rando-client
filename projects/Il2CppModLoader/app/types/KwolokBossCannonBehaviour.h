#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCannonBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossCannonBehaviour__Class** type_info;
        inline app::KwolokBossCannonBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCannonBehaviour__Class>(type_info, "", "KwolokBossCannonBehaviour");
        }
        inline app::KwolokBossCannonBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossCannonBehaviour>(get_class());
        }
    } // namespace KwolokBossCannonBehaviour
} // namespace app::classes::types
