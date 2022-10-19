#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityDataCaptureAgent {
        inline app::EntityDataCaptureAgent__Class** type_info = (app::EntityDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047144E8));
        inline app::EntityDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::EntityDataCaptureAgent__Class>(type_info, "", "EntityDataCaptureAgent");
        }
        inline app::EntityDataCaptureAgent* create() {
            return il2cpp::create_object<app::EntityDataCaptureAgent>(get_class());
        }
    } // namespace EntityDataCaptureAgent
} // namespace app::classes::types
