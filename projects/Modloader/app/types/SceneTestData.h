#pragma once
#include <Modloader/app/structs/SceneTestData.h>
#include <Modloader/app/structs/SceneTestData__Array.h>
#include <Modloader/app/structs/SceneTestData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneTestData {
        inline app::SceneTestData__Class** type_info() {
            static app::SceneTestData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneTestData__Class**)(modloader::win::memory::resolve_rva(0x04773B80));
            }
            return cache;
        }
        inline app::SceneTestData__Class* get_class() {
            return il2cpp::get_class<app::SceneTestData__Class>(type_info(), "Moon.HierarchyPerformanceTest", "SceneTestData");
        }
        inline app::SceneTestData* create() {
            return il2cpp::create_object<app::SceneTestData>(get_class());
        }
        inline app::SceneTestData__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneTestData__Array>(get_class(), size);
        }
        inline app::SceneTestData__Array* create_array(const std::vector<app::SceneTestData*>& items) {
            return il2cpp::array_new<app::SceneTestData__Array>(get_class(), items);
        }
    } // namespace SceneTestData
} // namespace app::classes::types
