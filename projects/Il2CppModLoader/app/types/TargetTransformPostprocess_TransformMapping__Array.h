#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetTransformPostprocess_TransformMapping__Array {
        namespace {
            app::TargetTransformPostprocess_TransformMapping__Array__Class* type_info_ref = nullptr;
        }
        app::TargetTransformPostprocess_TransformMapping__Array__Class** type_info = &type_info_ref;
        inline app::TargetTransformPostprocess_TransformMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::TargetTransformPostprocess_TransformMapping__Array__Class>(type_info, "", "TargetTransformPostprocess+TransformMapping[]");
        }
        inline app::TargetTransformPostprocess_TransformMapping__Array* create() {
            return il2cpp::create_object<app::TargetTransformPostprocess_TransformMapping__Array>(get_class());
        }
    } // namespace TargetTransformPostprocess_TransformMapping__Array
} // namespace app::classes::types
