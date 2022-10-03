#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerTransform_TransformData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerTransform_TransformData__Class** type_info;
        inline app::ServerTransform_TransformData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerTransform_TransformData__Class>(type_info, "", "ServerTransform", "TransformData");
        }
        inline app::ServerTransform_TransformData* create() {
            return il2cpp::create_object<app::ServerTransform_TransformData>(get_class());
        }
        inline app::ServerTransform_TransformData__Boxed* box(app::ServerTransform_TransformData value) {
            return il2cpp::box_value<app::ServerTransform_TransformData__Boxed>(get_class(), value);
        }
    } // namespace ServerTransform_TransformData
} // namespace app::classes::types
