#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryCaptureAgent__Class** type_info;
        inline app::MemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryCaptureAgent__Class>(type_info, "", "MemoryCaptureAgent");
        }
        inline app::MemoryCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryCaptureAgent>(get_class());
        }
    } // namespace MemoryCaptureAgent
} // namespace app::classes::types
