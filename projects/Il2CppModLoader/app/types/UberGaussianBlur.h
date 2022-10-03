#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGaussianBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGaussianBlur__Class** type_info;
        inline app::UberGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::UberGaussianBlur__Class>(type_info, "", "UberGaussianBlur");
        }
        inline app::UberGaussianBlur* create() {
            return il2cpp::create_object<app::UberGaussianBlur>(get_class());
        }
    } // namespace UberGaussianBlur
} // namespace app::classes::types
