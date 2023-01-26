#pragma once
#include <Modloader/app/structs/KuAnimationLayers__Enum.h>
#include <Modloader/app/structs/KuAnimationLayers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuAnimationLayers__Enum {
        inline app::KuAnimationLayers__Enum__Class** type_info() {
            static app::KuAnimationLayers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuAnimationLayers__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuAnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_class<app::KuAnimationLayers__Enum__Class>(type_info(), "", "KuAnimationLayers");
        }
        inline app::KuAnimationLayers__Enum* create() {
            return il2cpp::create_object<app::KuAnimationLayers__Enum>(get_class());
        }
    } // namespace KuAnimationLayers__Enum
} // namespace app::classes::types
