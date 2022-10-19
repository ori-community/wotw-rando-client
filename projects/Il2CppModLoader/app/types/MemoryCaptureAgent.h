#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryCaptureAgent {
        inline app::MemoryCaptureAgent__Class** type_info = (app::MemoryCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04724B40));
        inline app::MemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryCaptureAgent__Class>(type_info, "", "MemoryCaptureAgent");
        }
        inline app::MemoryCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryCaptureAgent>(get_class());
        }
    } // namespace MemoryCaptureAgent
} // namespace app::classes::types
