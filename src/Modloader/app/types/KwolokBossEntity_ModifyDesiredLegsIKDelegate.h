#pragma once
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLegsIKDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate {
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class** type_info() {
            static app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class**)(modloader::win::memory::resolve_rva(0x04746410));
            }
            return cache;
        }
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate__Class>(type_info(), "", "KwolokBossEntity", "ModifyDesiredLegsIKDelegate");
        }
        inline app::KwolokBossEntity_ModifyDesiredLegsIKDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyDesiredLegsIKDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyDesiredLegsIKDelegate
} // namespace app::classes::types
