#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuAnimationLayers__Enum {
        namespace {
            app::KuAnimationLayers__Enum__Class* type_info_ref = nullptr;
        }
        app::KuAnimationLayers__Enum__Class** type_info = &type_info_ref;
        inline app::KuAnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_class<app::KuAnimationLayers__Enum__Class>(type_info, "", "KuAnimationLayers");
        }
        inline app::KuAnimationLayers__Enum* create() {
            return il2cpp::create_object<app::KuAnimationLayers__Enum>(get_class());
        }
    } // namespace KuAnimationLayers__Enum
} // namespace app::classes::types
