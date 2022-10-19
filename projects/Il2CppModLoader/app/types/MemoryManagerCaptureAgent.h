#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryManagerCaptureAgent {
        inline app::MemoryManagerCaptureAgent__Class** type_info = (app::MemoryManagerCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04796500));
        inline app::MemoryManagerCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryManagerCaptureAgent__Class>(type_info, "", "MemoryManagerCaptureAgent");
        }
        inline app::MemoryManagerCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryManagerCaptureAgent>(get_class());
        }
    } // namespace MemoryManagerCaptureAgent
} // namespace app::classes::types
