#pragma once
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData__Array.h>
#include <Modloader/app/structs/SceneMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData {
        inline app::SceneMetaData__Class** type_info() {
            static app::SceneMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData__Class>(type_info(), "", "SceneMetaData");
        }
        inline app::SceneMetaData* create() {
            return il2cpp::create_object<app::SceneMetaData>(get_class());
        }
        inline app::SceneMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData__Array>(get_class(), size);
        }
        inline app::SceneMetaData__Array* create_array(const std::vector<app::SceneMetaData*>& items) {
            return il2cpp::array_new<app::SceneMetaData__Array>(get_class(), items);
        }
    } // namespace SceneMetaData
} // namespace app::classes::types
