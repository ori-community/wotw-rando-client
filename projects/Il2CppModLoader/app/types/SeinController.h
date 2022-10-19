#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinController {
        inline app::SeinController__Class** type_info = (app::SeinController__Class**)(modloader::win::memory::resolve_rva(0x04731AC0));
        inline app::SeinController__Class* get_class() {
            return il2cpp::get_class<app::SeinController__Class>(type_info, "", "SeinController");
        }
        inline app::SeinController* create() {
            return il2cpp::create_object<app::SeinController>(get_class());
        }
    } // namespace SeinController
} // namespace app::classes::types
