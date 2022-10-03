#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleCollator__Class** type_info;
        inline app::SimpleCollator__Class* get_class() {
            return il2cpp::get_class<app::SimpleCollator__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator");
        }
        inline app::SimpleCollator* create() {
            return il2cpp::create_object<app::SimpleCollator>(get_class());
        }
        inline app::SimpleCollator__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleCollator__Array>(get_class(), size);
        }
    } // namespace SimpleCollator
} // namespace app::classes::types
