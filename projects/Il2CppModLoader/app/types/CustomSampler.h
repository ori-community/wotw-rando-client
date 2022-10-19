#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomSampler {
        inline app::CustomSampler__Class** type_info = (app::CustomSampler__Class**)(modloader::win::memory::resolve_rva(0x04783640));
        inline app::CustomSampler__Class* get_class() {
            return il2cpp::get_class<app::CustomSampler__Class>(type_info, "UnityEngine.Profiling", "CustomSampler");
        }
        inline app::CustomSampler* create() {
            return il2cpp::create_object<app::CustomSampler>(get_class());
        }
    } // namespace CustomSampler
} // namespace app::classes::types
