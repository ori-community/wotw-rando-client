#pragma once
#include <Modloader/app/structs/KwolokBossEntity_ModifyCameraTargetsDelegate.h>
#include <Modloader/app/structs/KwolokBossEntity_ModifyCameraTargetsDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_ModifyCameraTargetsDelegate {
        inline app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class** type_info() {
            static app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class**)(modloader::win::memory::resolve_rva(0x0474C238));
            }
            return cache;
        }
        inline app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_ModifyCameraTargetsDelegate__Class>(type_info(), "", "KwolokBossEntity", "ModifyCameraTargetsDelegate");
        }
        inline app::KwolokBossEntity_ModifyCameraTargetsDelegate* create() {
            return il2cpp::create_object<app::KwolokBossEntity_ModifyCameraTargetsDelegate>(get_class());
        }
    } // namespace KwolokBossEntity_ModifyCameraTargetsDelegate
} // namespace app::classes::types
