#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate {
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class** type_info = (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class**)(modloader::win::memory::resolve_rva(0x04746410));
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyDesiredLegsIKDelegate");
        }
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate
} // namespace app::classes::types
