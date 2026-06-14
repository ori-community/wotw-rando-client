#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_c.h>
#include <Modloader/app/structs/KwolokBossLocomotion_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_c {
        inline app::KwolokBossLocomotion_c__Class** type_info() {
            static app::KwolokBossLocomotion_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_c__Class**)(modloader::win::memory::resolve_rva(0x04713138));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_c__Class>(type_info(), "", "KwolokBossLocomotion", "<>c");
        }
        inline app::KwolokBossLocomotion_c* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_c>(get_class());
        }
    } // namespace KwolokBossLocomotion_c
} // namespace app::classes::types
