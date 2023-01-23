#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Class.h>
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping.h>
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Array.h>

namespace app::classes::types {
    namespace TargetTransformPostprocess_TransformMapping {
        namespace {
            inline app::TargetTransformPostprocess_TransformMapping__Class* type_info_ref = nullptr;
        }
        inline app::TargetTransformPostprocess_TransformMapping__Class** type_info = &type_info_ref;
        inline app::TargetTransformPostprocess_TransformMapping__Class* get_class() {
            return il2cpp::get_nested_class<app::TargetTransformPostprocess_TransformMapping__Class>(type_info, "", "TargetTransformPostprocess", "TransformMapping");
        }
        inline app::TargetTransformPostprocess_TransformMapping* create() {
            return il2cpp::create_object<app::TargetTransformPostprocess_TransformMapping>(get_class());
        }
        inline app::TargetTransformPostprocess_TransformMapping__Array* create_array(int size) {
            return il2cpp::array_new<app::TargetTransformPostprocess_TransformMapping__Array>(get_class(), size);
        }
        inline app::TargetTransformPostprocess_TransformMapping__Array* create_array(const std::vector<app::TargetTransformPostprocess_TransformMapping*>& items) {
            return il2cpp::array_new<app::TargetTransformPostprocess_TransformMapping__Array>(get_class(), items);
        }
    } // namespace TargetTransformPostprocess_TransformMapping
} // namespace app::classes::types
