#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitStop {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitStop__Class** type_info;
        inline app::HitStop__Class* get_class() {
            return il2cpp::get_class<app::HitStop__Class>(type_info, "Moon", "HitStop");
        }
        inline app::HitStop* create() {
            return il2cpp::create_object<app::HitStop>(get_class());
        }
        inline app::HitStop__Array* create_array(int size) {
            return il2cpp::array_new<app::HitStop__Array>(get_class(), size);
        }
    } // namespace HitStop
} // namespace app::classes::types
