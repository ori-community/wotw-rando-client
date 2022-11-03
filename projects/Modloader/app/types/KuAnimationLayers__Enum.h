#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuAnimationLayers__Enum {
        namespace {
            inline app::KuAnimationLayers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KuAnimationLayers__Enum__Class** type_info = &type_info_ref;
        inline app::KuAnimationLayers__Enum__Class* get_class() {
            return il2cpp::get_class<app::KuAnimationLayers__Enum__Class>(type_info, "", "KuAnimationLayers");
        }
        inline app::KuAnimationLayers__Enum* create() {
            return il2cpp::create_object<app::KuAnimationLayers__Enum>(get_class());
        }
    } // namespace KuAnimationLayers__Enum
} // namespace app::classes::types
