#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClipperRegistry {
        inline app::ClipperRegistry__Class** type_info = (app::ClipperRegistry__Class**)(modloader::win::memory::resolve_rva(0x04713928));
        inline app::ClipperRegistry__Class* get_class() {
            return il2cpp::get_class<app::ClipperRegistry__Class>(type_info, "UnityEngine.UI", "ClipperRegistry");
        }
        inline app::ClipperRegistry* create() {
            return il2cpp::create_object<app::ClipperRegistry>(get_class());
        }
    } // namespace ClipperRegistry
} // namespace app::classes::types
