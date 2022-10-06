#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_ObjectData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeakedSceneObjectDetector_ObjectData__Class** type_info;
        inline app::LeakedSceneObjectDetector_ObjectData__Class* get_class() {
            return il2cpp::get_nested_class<app::LeakedSceneObjectDetector_ObjectData__Class>(type_info, "", "LeakedSceneObjectDetector", "ObjectData");
        }
        inline app::LeakedSceneObjectDetector_ObjectData* create() {
            return il2cpp::create_object<app::LeakedSceneObjectDetector_ObjectData>(get_class());
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array* create_array(int size) {
            return il2cpp::array_new<app::LeakedSceneObjectDetector_ObjectData__Array>(get_class(), size);
        }
        inline app::LeakedSceneObjectDetector_ObjectData__Array* create_array(const std::vector<app::LeakedSceneObjectDetector_ObjectData*>& items) {
            return il2cpp::array_new<app::LeakedSceneObjectDetector_ObjectData__Array>(get_class(), items);
        }
    } // namespace LeakedSceneObjectDetector_ObjectData
} // namespace app::classes::types
