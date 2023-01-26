#pragma once
#include <Modloader/app/structs/VectorAnimationParameter.h>
#include <Modloader/app/structs/VectorAnimationParameter__Array.h>
#include <Modloader/app/structs/VectorAnimationParameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameter {
        inline app::VectorAnimationParameter__Class** type_info() {
            static app::VectorAnimationParameter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VectorAnimationParameter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VectorAnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameter__Class>(type_info(), "Moon", "VectorAnimationParameter");
        }
        inline app::VectorAnimationParameter* create() {
            return il2cpp::create_object<app::VectorAnimationParameter>(get_class());
        }
        inline app::VectorAnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::VectorAnimationParameter__Array>(get_class(), size);
        }
        inline app::VectorAnimationParameter__Array* create_array(const std::vector<app::VectorAnimationParameter*>& items) {
            return il2cpp::array_new<app::VectorAnimationParameter__Array>(get_class(), items);
        }
    } // namespace VectorAnimationParameter
} // namespace app::classes::types
