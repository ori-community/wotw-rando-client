#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SuspensionManager {
        inline app::SuspensionManager__Class** type_info = (app::SuspensionManager__Class**)(modloader::win::memory::resolve_rva(0x04720CD0));
        inline app::SuspensionManager__Class* get_class() {
            return il2cpp::get_class<app::SuspensionManager__Class>(type_info, "Moon", "SuspensionManager");
        }
        inline app::SuspensionManager* create() {
            return il2cpp::create_object<app::SuspensionManager>(get_class());
        }
    } // namespace SuspensionManager
} // namespace app::classes::types
