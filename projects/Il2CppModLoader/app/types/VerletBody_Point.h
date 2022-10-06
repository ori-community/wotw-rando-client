#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBody_Point {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletBody_Point__Class** type_info;
        inline app::VerletBody_Point__Class* get_class() {
            return il2cpp::get_nested_class<app::VerletBody_Point__Class>(type_info, "Moon", "VerletBody", "Point");
        }
        inline app::VerletBody_Point* create() {
            return il2cpp::create_object<app::VerletBody_Point>(get_class());
        }
        inline app::VerletBody_Point__Array* create_array(int size) {
            return il2cpp::array_new<app::VerletBody_Point__Array>(get_class(), size);
        }
        inline app::VerletBody_Point__Array* create_array(const std::vector<app::VerletBody_Point*>& items) {
            return il2cpp::array_new<app::VerletBody_Point__Array>(get_class(), items);
        }
    } // namespace VerletBody_Point
} // namespace app::classes::types
