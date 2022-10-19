#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneController {
        inline app::XboxOneController__Class** type_info = (app::XboxOneController__Class**)(modloader::win::memory::resolve_rva(0x04736508));
        inline app::XboxOneController__Class* get_class() {
            return il2cpp::get_class<app::XboxOneController__Class>(type_info, "", "XboxOneController");
        }
        inline app::XboxOneController* create() {
            return il2cpp::create_object<app::XboxOneController>(get_class());
        }
    } // namespace XboxOneController
} // namespace app::classes::types
