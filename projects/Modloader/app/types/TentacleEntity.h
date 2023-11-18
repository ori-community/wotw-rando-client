#pragma once
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/TentacleEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEntity {
        inline app::TentacleEntity__Class** type_info() {
            static app::TentacleEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEntity__Class**)(modloader::win::memory::resolve_rva(0x047737C8));
            }
            return cache;
        }
        inline app::TentacleEntity__Class* get_class() {
            return il2cpp::get_class<app::TentacleEntity__Class>(type_info(), "", "TentacleEntity");
        }
        inline app::TentacleEntity* create() {
            return il2cpp::create_object<app::TentacleEntity>(get_class());
        }
    } // namespace TentacleEntity
} // namespace app::classes::types
