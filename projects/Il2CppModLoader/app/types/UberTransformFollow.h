#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTransformFollow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberTransformFollow__Class** type_info;
        inline app::UberTransformFollow__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollow__Class>(type_info, "Moon", "UberTransformFollow");
        }
        inline app::UberTransformFollow* create() {
            return il2cpp::create_object<app::UberTransformFollow>(get_class());
        }
        inline app::UberTransformFollow__Array* create_array(int size) {
            return il2cpp::array_new<app::UberTransformFollow__Array>(get_class(), size);
        }
    } // namespace UberTransformFollow
} // namespace app::classes::types
