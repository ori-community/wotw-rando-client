#pragma once
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure__Array.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_Structure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_Structure {
        inline app::NativeVerletAnimationPostprocess_Structure__Class** type_info() {
            static app::NativeVerletAnimationPostprocess_Structure__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeVerletAnimationPostprocess_Structure__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_Structure__Class>(type_info(), "Moon.Animation", "NativeVerletAnimationPostprocess", "Structure");
        }
        inline app::NativeVerletAnimationPostprocess_Structure* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_Structure>(get_class());
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Array* create_array(int size) {
            return il2cpp::array_new<app::NativeVerletAnimationPostprocess_Structure__Array>(get_class(), size);
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Array* create_array(const std::vector<app::NativeVerletAnimationPostprocess_Structure*>& items) {
            return il2cpp::array_new<app::NativeVerletAnimationPostprocess_Structure__Array>(get_class(), items);
        }
    } // namespace NativeVerletAnimationPostprocess_Structure
} // namespace app::classes::types
