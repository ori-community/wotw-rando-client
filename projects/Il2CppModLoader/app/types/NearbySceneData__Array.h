#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NearbySceneData__Array {
        namespace {
            app::NearbySceneData__Array__Class* type_info_ref = nullptr;
        }
        app::NearbySceneData__Array__Class** type_info = &type_info_ref;
        inline app::NearbySceneData__Array__Class* get_class() {
            return il2cpp::get_class<app::NearbySceneData__Array__Class>(type_info, "", "NearbySceneData[]");
        }
        inline app::NearbySceneData__Array* create() {
            return il2cpp::create_object<app::NearbySceneData__Array>(get_class());
        }
    } // namespace NearbySceneData__Array
} // namespace app::classes::types
