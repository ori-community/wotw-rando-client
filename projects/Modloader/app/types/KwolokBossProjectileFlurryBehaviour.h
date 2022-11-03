#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossProjectileFlurryBehaviour {
        namespace {
            inline app::KwolokBossProjectileFlurryBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossProjectileFlurryBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossProjectileFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossProjectileFlurryBehaviour__Class>(type_info, "", "KwolokBossProjectileFlurryBehaviour");
        }
        inline app::KwolokBossProjectileFlurryBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossProjectileFlurryBehaviour>(get_class());
        }
    } // namespace KwolokBossProjectileFlurryBehaviour
} // namespace app::classes::types
