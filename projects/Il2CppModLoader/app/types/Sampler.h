#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sampler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Sampler__Class** type_info;
        inline app::Sampler__Class* get_class() {
            return il2cpp::get_class<app::Sampler__Class>(type_info, "UnityEngine.Profiling", "Sampler");
        }
        inline app::Sampler* create() {
            return il2cpp::create_object<app::Sampler>(get_class());
        }
    } // namespace Sampler
} // namespace app::classes::types
