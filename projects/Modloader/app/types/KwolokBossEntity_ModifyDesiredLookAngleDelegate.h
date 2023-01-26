#pragma once
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLookAngleDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyDesiredLookAngleDelegate {
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class** type_info() {
            static app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class**)(modloader::win::memory::resolve_rva(0x04739FB8));
            }
            return cache;
        }
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyDesiredLookAngleDelegate__Class>(type_info(), "", "KwolokBossEntity", "ModifyDesiredLookAngleDelegate");
        }
        inline app::KwolokBossEntity_ModifyDesiredLookAngleDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyDesiredLookAngleDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyDesiredLookAngleDelegate
} // namespace app::classes::types
