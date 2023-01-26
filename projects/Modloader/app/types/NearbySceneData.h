#pragma once
#include <Modloader/app/structs/NearbySceneData.h>
#include <Modloader/app/structs/NearbySceneData__Array.h>
#include <Modloader/app/structs/NearbySceneData__Boxed.h>
#include <Modloader/app/structs/NearbySceneData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NearbySceneData {
        inline app::NearbySceneData__Class** type_info() {
            static app::NearbySceneData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NearbySceneData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NearbySceneData__Class* get_class() {
            return il2cpp::get_class<app::NearbySceneData__Class>(type_info(), "", "NearbySceneData");
        }
        inline app::NearbySceneData* create() {
            return il2cpp::create_object<app::NearbySceneData>(get_class());
        }
        inline app::NearbySceneData__Boxed* box(app::NearbySceneData value) {
            return il2cpp::box_value<app::NearbySceneData__Boxed>(get_class(), value);
        }
        inline app::NearbySceneData__Array* create_array(int size) {
            return il2cpp::array_new<app::NearbySceneData__Array>(get_class(), size);
        }
        inline app::NearbySceneData__Array* create_array(const std::vector<app::NearbySceneData>& items) {
            return il2cpp::array_new<app::NearbySceneData__Array>(get_class(), items);
        }
    } // namespace NearbySceneData
} // namespace app::classes::types
