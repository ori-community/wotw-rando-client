#pragma once
#include <Modloader/app/structs/IAnimatedValueListener__Array.h>
#include <Modloader/app/structs/IAnimatedValueListener__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAnimatedValueListener__Array {
        inline app::IAnimatedValueListener__Array__Class** type_info() {
            static app::IAnimatedValueListener__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IAnimatedValueListener__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IAnimatedValueListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IAnimatedValueListener__Array__Class>(type_info(), "Moon", "IAnimatedValueListener[]");
        }
        inline app::IAnimatedValueListener__Array* create() {
            return il2cpp::create_object<app::IAnimatedValueListener__Array>(get_class());
        }
    } // namespace IAnimatedValueListener__Array
} // namespace app::classes::types
