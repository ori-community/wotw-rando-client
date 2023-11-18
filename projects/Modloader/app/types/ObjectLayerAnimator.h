#pragma once
#include <Modloader/app/structs/ObjectLayerAnimator.h>
#include <Modloader/app/structs/ObjectLayerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectLayerAnimator {
        inline app::ObjectLayerAnimator__Class** type_info() {
            static app::ObjectLayerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectLayerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectLayerAnimator__Class* get_class() {
            return il2cpp::get_class<app::ObjectLayerAnimator__Class>(type_info(), "Moon.eventAnimators", "ObjectLayerAnimator");
        }
        inline app::ObjectLayerAnimator* create() {
            return il2cpp::create_object<app::ObjectLayerAnimator>(get_class());
        }
    } // namespace ObjectLayerAnimator
} // namespace app::classes::types
