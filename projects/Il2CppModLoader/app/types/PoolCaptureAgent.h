#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoolCaptureAgent {
        inline app::PoolCaptureAgent__Class** type_info = (app::PoolCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047997F0));
        inline app::PoolCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::PoolCaptureAgent__Class>(type_info, "", "PoolCaptureAgent");
        }
        inline app::PoolCaptureAgent* create() {
            return il2cpp::create_object<app::PoolCaptureAgent>(get_class());
        }
    } // namespace PoolCaptureAgent
} // namespace app::classes::types
