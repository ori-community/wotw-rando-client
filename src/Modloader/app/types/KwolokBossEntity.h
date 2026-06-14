#pragma once
#include <Modloader/app/structs/KwolokBossEntity.h>
#include <Modloader/app/structs/KwolokBossEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossEntity {
        inline app::KwolokBossEntity__Class** type_info() {
            static app::KwolokBossEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossEntity__Class**)(modloader::win::memory::resolve_rva(0x04757790));
            }
            return cache;
        }
        inline app::KwolokBossEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossEntity__Class>(type_info(), "", "KwolokBossEntity");
        }
        inline app::KwolokBossEntity* create() {
            return il2cpp::create_object<app::KwolokBossEntity>(get_class());
        }
    } // namespace KwolokBossEntity
} // namespace app::classes::types
