#pragma once
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Array.h>
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetTransformPostprocess_TransformMapping__Array {
        inline app::TargetTransformPostprocess_TransformMapping__Array__Class** type_info() {
            static app::TargetTransformPostprocess_TransformMapping__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetTransformPostprocess_TransformMapping__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetTransformPostprocess_TransformMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::TargetTransformPostprocess_TransformMapping__Array__Class>(type_info(), "", "TargetTransformPostprocess+TransformMapping[]");
        }
        inline app::TargetTransformPostprocess_TransformMapping__Array* create() {
            return il2cpp::create_object<app::TargetTransformPostprocess_TransformMapping__Array>(get_class());
        }
    } // namespace TargetTransformPostprocess_TransformMapping__Array
} // namespace app::classes::types
