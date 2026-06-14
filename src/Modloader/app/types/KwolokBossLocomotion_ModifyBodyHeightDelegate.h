#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyBodyHeightDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyBodyHeightDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyBodyHeightDelegate {
        inline app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class** type_info() {
            static app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class**)(modloader::win::memory::resolve_rva(0x04779738));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyBodyHeightDelegate__Class>(type_info(), "", "KwolokBossLocomotion", "ModifyBodyHeightDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyBodyHeightDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyBodyHeightDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyBodyHeightDelegate
} // namespace app::classes::types
