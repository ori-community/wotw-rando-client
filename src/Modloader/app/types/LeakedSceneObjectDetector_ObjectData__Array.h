#pragma once
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Array.h>
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_ObjectData__Array {
        inline app::LeakedSceneObjectDetector_ObjectData__Array__Class** type_info() {
            static app::LeakedSceneObjectDetector_ObjectData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeakedSceneObjectDetector_ObjectData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeakedSceneObjectDetector_ObjectData__Array__Class>(type_info(), "", "LeakedSceneObjectDetector+ObjectData[]");
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_ObjectData__Array>(get_class());
        }
    } // namespace LeakedSceneObjectDetector_ObjectData__Array
} // namespace app::classes::types
