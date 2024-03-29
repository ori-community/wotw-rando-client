#pragma once
#include <Modloader/app/structs/KwolokBossEntity_c.h>
#include <Modloader/app/structs/KwolokBossEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity_c {
        inline app::KwolokBossEntity_c__Class** type_info() {
            static app::KwolokBossEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047506B0));
            }
            return cache;
        }
        inline app::KwolokBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossEntity_c__Class>(type_info(), "", "KwolokBossEntity", "<>c");
        }
        inline app::KwolokBossEntity_c* create() {
            return il2cpp::create_object<app::KwolokBossEntity_c>(get_class());
        }
    } // namespace KwolokBossEntity_c
} // namespace app::classes::types
