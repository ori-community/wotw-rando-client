#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WWiseCinematicScopeAnimatorEntity {
        namespace {
            inline app::WWiseCinematicScopeAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::WWiseCinematicScopeAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::WWiseCinematicScopeAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::WWiseCinematicScopeAnimatorEntity__Class>(type_info, "Moon.Timeline", "WWiseCinematicScopeAnimatorEntity");
        }
        inline app::WWiseCinematicScopeAnimatorEntity* create() {
            return il2cpp::create_object<app::WWiseCinematicScopeAnimatorEntity>(get_class());
        }
    } // namespace WWiseCinematicScopeAnimatorEntity
} // namespace app::classes::types
