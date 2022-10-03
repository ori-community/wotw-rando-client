#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossProjectileFlurryBehaviour {
        namespace {
            app::KwolokBossProjectileFlurryBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossProjectileFlurryBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossProjectileFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossProjectileFlurryBehaviour__Class>(type_info, "", "KwolokBossProjectileFlurryBehaviour");
        }
        inline app::KwolokBossProjectileFlurryBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossProjectileFlurryBehaviour>(get_class());
        }
    } // namespace KwolokBossProjectileFlurryBehaviour
} // namespace app::classes::types
