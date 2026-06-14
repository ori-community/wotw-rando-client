#pragma once
#include <Modloader/app/structs/BombSlugEntity.h>
#include <Modloader/app/structs/BombSlugEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombSlugEntity {
        inline app::BombSlugEntity__Class** type_info() {
            static app::BombSlugEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BombSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x0473ACD8));
            }
            return cache;
        }
        inline app::BombSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::BombSlugEntity__Class>(type_info(), "", "BombSlugEntity");
        }
        inline app::BombSlugEntity* create() {
            return il2cpp::create_object<app::BombSlugEntity>(get_class());
        }
    } // namespace BombSlugEntity
} // namespace app::classes::types
