#pragma once
#include <Modloader/app/structs/DropSlugEntity.h>
#include <Modloader/app/structs/DropSlugEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugEntity {
        inline app::DropSlugEntity__Class** type_info() {
            static app::DropSlugEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x0475EF88));
            }
            return cache;
        }
        inline app::DropSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::DropSlugEntity__Class>(type_info(), "", "DropSlugEntity");
        }
        inline app::DropSlugEntity* create() {
            return il2cpp::create_object<app::DropSlugEntity>(get_class());
        }
    } // namespace DropSlugEntity
} // namespace app::classes::types
