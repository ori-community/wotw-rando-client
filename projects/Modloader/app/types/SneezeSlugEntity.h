#pragma once
#include <Modloader/app/structs/SneezeSlugEntity.h>
#include <Modloader/app/structs/SneezeSlugEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugEntity {
        inline app::SneezeSlugEntity__Class** type_info() {
            static app::SneezeSlugEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SneezeSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x04740F60));
            }
            return cache;
        }
        inline app::SneezeSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugEntity__Class>(type_info(), "", "SneezeSlugEntity");
        }
        inline app::SneezeSlugEntity* create() {
            return il2cpp::create_object<app::SneezeSlugEntity>(get_class());
        }
    } // namespace SneezeSlugEntity
} // namespace app::classes::types
