#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeakedSceneObjectDetector_ObjectData {
        inline app::LeakedSceneObjectDetector_ObjectData__Class** type_info = (app::LeakedSceneObjectDetector_ObjectData__Class**)(modloader::win::memory::resolve_rva(0x047440B0));
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
