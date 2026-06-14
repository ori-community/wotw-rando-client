#pragma once
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum.h>
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum__Array.h>
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorAnimator_VectorProperty__Enum {
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Class** type_info() {
            static app::UberShaderVectorAnimator_VectorProperty__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderVectorAnimator_VectorProperty__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderVectorAnimator_VectorProperty__Enum__Class>(type_info(), "Moon.Timeline", "UberShaderVectorAnimator", "VectorProperty");
        }
        inline app::UberShaderVectorAnimator_VectorProperty__Enum* create() {
            return il2cpp::create_object<app::UberShaderVectorAnimator_VectorProperty__Enum>(get_class());
        }
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderVectorAnimator_VectorProperty__Enum__Array>(get_class(), size);
        }
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Array* create_array(const std::vector<app::UberShaderVectorAnimator_VectorProperty__Enum*>& items) {
            return il2cpp::array_new<app::UberShaderVectorAnimator_VectorProperty__Enum__Array>(get_class(), items);
        }
    } // namespace UberShaderVectorAnimator_VectorProperty__Enum
} // namespace app::classes::types
