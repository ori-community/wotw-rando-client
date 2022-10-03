#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EdgeDetection_EdgeDetectMode__Enum {
        namespace {
            app::EdgeDetection_EdgeDetectMode__Enum__Class* type_info_ref = nullptr;
        }
        app::EdgeDetection_EdgeDetectMode__Enum__Class** type_info = &type_info_ref;
        inline app::EdgeDetection_EdgeDetectMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EdgeDetection_EdgeDetectMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "EdgeDetection", "EdgeDetectMode");
        }
        inline app::EdgeDetection_EdgeDetectMode__Enum* create() {
            return il2cpp::create_object<app::EdgeDetection_EdgeDetectMode__Enum>(get_class());
        }
    } // namespace EdgeDetection_EdgeDetectMode__Enum
} // namespace app::classes::types
