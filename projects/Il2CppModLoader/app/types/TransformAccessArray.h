#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformAccessArray {
        namespace {
            app::TransformAccessArray__Class* type_info_ref = nullptr;
        }
        app::TransformAccessArray__Class** type_info = &type_info_ref;
        inline app::TransformAccessArray__Class* get_class() {
            return il2cpp::get_class<app::TransformAccessArray__Class>(type_info, "UnityEngine.Jobs", "TransformAccessArray");
        }
        inline app::TransformAccessArray* create() {
            return il2cpp::create_object<app::TransformAccessArray>(get_class());
        }
        inline app::TransformAccessArray__Boxed* box(app::TransformAccessArray value) {
            return il2cpp::box_value<app::TransformAccessArray__Boxed>(get_class(), value);
        }
    } // namespace TransformAccessArray
} // namespace app::classes::types
