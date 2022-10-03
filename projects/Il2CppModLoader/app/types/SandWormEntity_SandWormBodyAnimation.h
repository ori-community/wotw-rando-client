#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormBodyAnimation {
        namespace {
            app::SandWormEntity_SandWormBodyAnimation__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity_SandWormBodyAnimation__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_SandWormBodyAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormBodyAnimation__Class>(type_info, "", "SandWormEntity", "SandWormBodyAnimation");
        }
        inline app::SandWormEntity_SandWormBodyAnimation* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormBodyAnimation>(get_class());
        }
    } // namespace SandWormEntity_SandWormBodyAnimation
} // namespace app::classes::types
