#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinController_c {
        inline app::SeinController_c__Class** type_info = (app::SeinController_c__Class**)(modloader::win::memory::resolve_rva(0x04795C98));
        inline app::SeinController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinController_c__Class>(type_info, "", "SeinController", "<>c");
        }
        inline app::SeinController_c* create() {
            return il2cpp::create_object<app::SeinController_c>(get_class());
        }
    } // namespace SeinController_c
} // namespace app::classes::types
