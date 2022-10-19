#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyDesiredLookAngleDelegate {
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class** type_info = (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class**)(modloader::win::memory::resolve_rva(0x04739FB8));
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class>(type_info, "", "KwolokBossEntity", "ModifyDesiredLookAngleDelegate");
        }
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyDesiredLookAngleDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyDesiredLookAngleDelegate
} // namespace app::classes::types
