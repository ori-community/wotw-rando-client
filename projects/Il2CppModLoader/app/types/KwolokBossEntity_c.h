#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity_c {
        inline app::KwolokBossEntity_c__Class** type_info = (app::KwolokBossEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047506B0));
        inline app::KwolokBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_c__Class>(type_info, "", "KwolokBossEntity", "<>c");
        }
        inline app::KwolokBossEntity_c* create() {
            return il2cpp::create_object<app::KwolokBossEntity_c>(get_class());
        }
    } // namespace KwolokBossEntity_c
} // namespace app::classes::types
