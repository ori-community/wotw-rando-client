#pragma once
#include <Modloader/app/structs/GardenerEntity.h>
#include <Modloader/app/structs/GardenerEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GardenerEntity {
        inline app::GardenerEntity__Class** type_info() {
            static app::GardenerEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GardenerEntity__Class**)(modloader::win::memory::resolve_rva(0x0475A918));
            }
            return cache;
        }
        inline app::GardenerEntity__Class* get_class() {
            return il2cpp::get_class<app::GardenerEntity__Class>(type_info(), "", "GardenerEntity");
        }
        inline app::GardenerEntity* create() {
            return il2cpp::create_object<app::GardenerEntity>(get_class());
        }
    } // namespace GardenerEntity
} // namespace app::classes::types
