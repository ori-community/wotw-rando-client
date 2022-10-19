#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Version {
        inline app::Version__Class** type_info = (app::Version__Class**)(modloader::win::memory::resolve_rva(0x04756158));
        inline app::Version__Class* get_class() {
            return il2cpp::get_class<app::Version__Class>(type_info, "System", "Version");
        }
        inline app::Version* create() {
            return il2cpp::create_object<app::Version>(get_class());
        }
    } // namespace Version
} // namespace app::classes::types
