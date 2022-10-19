#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_c {
        inline app::PetrifiedOwlBossEntity_c__Class** type_info = (app::PetrifiedOwlBossEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047044A0));
        inline app::PetrifiedOwlBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEntity_c__Class>(type_info, "", "PetrifiedOwlBossEntity", "<>c");
        }
        inline app::PetrifiedOwlBossEntity_c* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_c>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_c
} // namespace app::classes::types
