#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerHelper {
        inline app::ScenesManagerHelper__Class** type_info = (app::ScenesManagerHelper__Class**)(modloader::win::memory::resolve_rva(0x047202B8));
        inline app::ScenesManagerHelper__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerHelper__Class>(type_info, "", "ScenesManagerHelper");
        }
        inline app::ScenesManagerHelper* create() {
            return il2cpp::create_object<app::ScenesManagerHelper>(get_class());
        }
    } // namespace ScenesManagerHelper
} // namespace app::classes::types
