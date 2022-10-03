#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BeforeRenderHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BeforeRenderHelper__Class** type_info;
        inline app::BeforeRenderHelper__Class* get_class() {
            return il2cpp::get_class<app::BeforeRenderHelper__Class>(type_info, "UnityEngine", "BeforeRenderHelper");
        }
        inline app::BeforeRenderHelper* create() {
            return il2cpp::create_object<app::BeforeRenderHelper>(get_class());
        }
    } // namespace BeforeRenderHelper
} // namespace app::classes::types
