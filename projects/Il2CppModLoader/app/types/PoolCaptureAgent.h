#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PoolCaptureAgent__Class** type_info;
        inline app::PoolCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PoolCaptureAgent__Class>(type_info, "", "PoolCaptureAgent");
        }
        inline app::PoolCaptureAgent* create() {
            return il2cpp::create_object<app::PoolCaptureAgent>(get_class());
        }
    } // namespace PoolCaptureAgent
} // namespace app::classes::types
