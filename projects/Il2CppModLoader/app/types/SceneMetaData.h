#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData {
        namespace {
            inline app::SceneMetaData__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData__Class** type_info = &type_info_ref;
        inline app::SceneMetaData__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData__Class>(type_info, "", "SceneMetaData");
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
