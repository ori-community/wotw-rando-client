#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateHelper {
        inline app::UpdateHelper__Class** type_info = (app::UpdateHelper__Class**)(modloader::win::memory::resolve_rva(0x04736800));
        inline app::UpdateHelper__Class* get_class() {
            return il2cpp::get_class<app::UpdateHelper__Class>(type_info, "moonCore.moonDriver", "UpdateHelper");
        }
        inline app::UpdateHelper* create() {
            return il2cpp::create_object<app::UpdateHelper>(get_class());
        }
    } // namespace UpdateHelper
} // namespace app::classes::types
