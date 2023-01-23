#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum__Class.h>
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum.h>

namespace app::classes::types {
    namespace EdgeDetection_EdgeDetectMode__Enum {
        namespace {
            inline app::EdgeDetection_EdgeDetectMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EdgeDetection_EdgeDetectMode__Enum__Class** type_info = &type_info_ref;
        inline app::EdgeDetection_EdgeDetectMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EdgeDetection_EdgeDetectMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "EdgeDetection", "EdgeDetectMode");
        }
        inline app::EdgeDetection_EdgeDetectMode__Enum* create() {
            return il2cpp::create_object<app::EdgeDetection_EdgeDetectMode__Enum>(get_class());
        }
    } // namespace EdgeDetection_EdgeDetectMode__Enum
} // namespace app::classes::types
