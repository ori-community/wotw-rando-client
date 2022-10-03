#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocess {
        namespace {
            app::DirectionalHitReactionPostprocess__Class* type_info_ref = nullptr;
        }
        app::DirectionalHitReactionPostprocess__Class** type_info = &type_info_ref;
        inline app::DirectionalHitReactionPostprocess__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocess__Class>(type_info, "Moon.Animation", "DirectionalHitReactionPostprocess");
        }
        inline app::DirectionalHitReactionPostprocess* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocess>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocess
} // namespace app::classes::types
