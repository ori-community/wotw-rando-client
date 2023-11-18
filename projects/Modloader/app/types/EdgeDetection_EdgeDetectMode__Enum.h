#pragma once
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum.h>
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EdgeDetection_EdgeDetectMode__Enum {
        inline app::EdgeDetection_EdgeDetectMode__Enum__Class** type_info() {
            static app::EdgeDetection_EdgeDetectMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EdgeDetection_EdgeDetectMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EdgeDetection_EdgeDetectMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EdgeDetection_EdgeDetectMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "EdgeDetection", "EdgeDetectMode");
        }
        inline app::EdgeDetection_EdgeDetectMode__Enum* create() {
            return il2cpp::create_object<app::EdgeDetection_EdgeDetectMode__Enum>(get_class());
        }
    } // namespace EdgeDetection_EdgeDetectMode__Enum
} // namespace app::classes::types
