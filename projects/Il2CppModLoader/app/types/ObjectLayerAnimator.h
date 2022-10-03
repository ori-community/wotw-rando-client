#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectLayerAnimator {
        namespace {
            app::ObjectLayerAnimator__Class* type_info_ref = nullptr;
        }
        app::ObjectLayerAnimator__Class** type_info = &type_info_ref;
        inline app::ObjectLayerAnimator__Class* get_class() {
            return il2cpp::get_class<app::ObjectLayerAnimator__Class>(type_info, "Moon.eventAnimators", "ObjectLayerAnimator");
        }
        inline app::ObjectLayerAnimator* create() {
            return il2cpp::create_object<app::ObjectLayerAnimator>(get_class());
        }
    } // namespace ObjectLayerAnimator
} // namespace app::classes::types
