#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidateNames {
        inline app::ValidateNames__Class** type_info = (app::ValidateNames__Class**)(modloader::win::memory::resolve_rva(0x047099C8));
        inline app::ValidateNames__Class* get_class() {
            return il2cpp::get_class<app::ValidateNames__Class>(type_info, "System.Xml", "ValidateNames");
        }
        inline app::ValidateNames* create() {
            return il2cpp::create_object<app::ValidateNames>(get_class());
        }
    } // namespace ValidateNames
} // namespace app::classes::types
