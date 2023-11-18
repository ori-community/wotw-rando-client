#pragma once
#include <Modloader/app/structs/CartographerEntity.h>
#include <Modloader/app/structs/CartographerEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerEntity {
        inline app::CartographerEntity__Class** type_info() {
            static app::CartographerEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CartographerEntity__Class**)(modloader::win::memory::resolve_rva(0x0472D770));
            }
            return cache;
        }
        inline app::CartographerEntity__Class* get_class() {
            return il2cpp::get_class<app::CartographerEntity__Class>(type_info(), "", "CartographerEntity");
        }
        inline app::CartographerEntity* create() {
            return il2cpp::create_object<app::CartographerEntity>(get_class());
        }
    } // namespace CartographerEntity
} // namespace app::classes::types
