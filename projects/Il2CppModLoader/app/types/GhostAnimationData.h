#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationData {
        namespace {
            app::GhostAnimationData__Class* type_info_ref = nullptr;
        }
        app::GhostAnimationData__Class** type_info = &type_info_ref;
        inline app::GhostAnimationData__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationData__Class>(type_info, "", "GhostAnimationData");
        }
        inline app::GhostAnimationData* create() {
            return il2cpp::create_object<app::GhostAnimationData>(get_class());
        }
    } // namespace GhostAnimationData
} // namespace app::classes::types
