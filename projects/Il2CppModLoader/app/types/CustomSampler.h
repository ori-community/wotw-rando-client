#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomSampler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomSampler__Class** type_info;
        inline app::CustomSampler__Class* get_class() {
            return il2cpp::get_class<app::CustomSampler__Class>(type_info, "UnityEngine.Profiling", "CustomSampler");
        }
        inline app::CustomSampler* create() {
            return il2cpp::create_object<app::CustomSampler>(get_class());
        }
    } // namespace CustomSampler
} // namespace app::classes::types
