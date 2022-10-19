#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_c {
        inline app::UpdateManager_c__Class** type_info = (app::UpdateManager_c__Class**)(modloader::win::memory::resolve_rva(0x04725068));
        inline app::UpdateManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_c__Class>(type_info, "Moon.Driver", "UpdateManager", "<>c");
        }
        inline app::UpdateManager_c* create() {
            return il2cpp::create_object<app::UpdateManager_c>(get_class());
        }
    } // namespace UpdateManager_c
} // namespace app::classes::types
