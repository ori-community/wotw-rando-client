#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightTorch {
        namespace {
            app::LightTorch__Class* type_info_ref = nullptr;
        }
        app::LightTorch__Class** type_info = &type_info_ref;
        inline app::LightTorch__Class* get_class() {
            return il2cpp::get_class<app::LightTorch__Class>(type_info, "", "LightTorch");
        }
        inline app::LightTorch* create() {
            return il2cpp::create_object<app::LightTorch>(get_class());
        }
    } // namespace LightTorch
} // namespace app::classes::types
