#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_c {
        inline app::KwolokBossLocomotion_c__Class** type_info = (app::KwolokBossLocomotion_c__Class**)(modloader::win::memory::resolve_rva(0x04713138));
        inline app::KwolokBossLocomotion_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_c__Class>(type_info, "", "KwolokBossLocomotion", "<>c");
        }
        inline app::KwolokBossLocomotion_c* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_c>(get_class());
        }
    } // namespace KwolokBossLocomotion_c
} // namespace app::classes::types
