#pragma once
#include <Modloader/app/structs/TransformAccessArray.h>
#include <Modloader/app/structs/TransformAccessArray__Boxed.h>
#include <Modloader/app/structs/TransformAccessArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAccessArray {
        inline app::TransformAccessArray__Class** type_info() {
            static app::TransformAccessArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformAccessArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformAccessArray__Class* get_class() {
            return il2cpp::get_class<app::TransformAccessArray__Class>(type_info(), "UnityEngine.Jobs", "TransformAccessArray");
        }
        inline app::TransformAccessArray* create() {
            return il2cpp::create_object<app::TransformAccessArray>(get_class());
        }
        inline app::TransformAccessArray__Boxed* box(app::TransformAccessArray value) {
            return il2cpp::box_value<app::TransformAccessArray__Boxed>(get_class(), value);
        }
    } // namespace TransformAccessArray
} // namespace app::classes::types
