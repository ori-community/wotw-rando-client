#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MathfInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MathfInternal__Class** type_info;
        inline app::MathfInternal__Class* get_class() {
            return il2cpp::get_class<app::MathfInternal__Class>(type_info, "UnityEngineInternal", "MathfInternal");
        }
        inline app::MathfInternal* create() {
            return il2cpp::create_object<app::MathfInternal>(get_class());
        }
        inline app::MathfInternal__Boxed* box(app::MathfInternal value) {
            return il2cpp::box_value<app::MathfInternal__Boxed>(get_class(), value);
        }
    } // namespace MathfInternal
} // namespace app::classes::types
